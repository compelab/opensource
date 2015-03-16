Lista Dinâmica em Cascades
==========================

Podemos criar listas dinâmicas em Cascades usando uma classe chamada _GroupDataModel_. Para seguir o exemplo que vou mostrar, crie um projeto no Momentics e abra o arquivo main.qml. Vamos deixá-lo assim:

```qml
import bb.cascades 1.2

Page {
    Container {
        ListView {
            
        }
    }
}
```

Depois vamos completar o QML com os dados que queremos, mas antes precisamos criar nossa lista em C++. Vou mostrar como podemos criar a lista de forma que possamos referenciá-la no QML. Pode parecer um passo desnecessariamente complicado a princípio, mas vou explicar passo a passo o que significa cada coisa.

Abra o arquivo _applicationui.hpp_ e abaixo do include do QObject adicione o include do _GroupDataModel_ (o tipo da classe que vai guardar os dados da nossa lista):

```cpp
#include <QObject>
#include <bb/cascades/GroupDataModel>
```

Em seguida, vamos criar uma variável que será a nossa lista. Abaixo de _private_, basta criar uma variável que será um ponteiro para GroupDataModel, dessa forma:

```cpp
private:
    QTranslator* m_pTranslator;
    bb::cascades::LocaleHandler* m_pLocaleHandler;
    bb::cascades::GroupDataModel * m_model;
```

Vamos chamá-la de m_model porque o padrão em C++ é que os nomes de variáveis comecem com m (de __member__). Em seguida, vamos criar uma função que vai simplesmente retornar os dados da lista quando referenciarmos essa variável no QML. Como vamos acessar essa função fora da classe, ela deve ser pública (ficar abaixo de _public_) e o retorno dela é um ponteiro para um objeto do tipo _GroupDataModel_. Ficaria como está abaixo:

```cpp
public:
    ApplicationUI();
    virtual ~ApplicationUI() {}
    bb::cascades::GroupDataModel * getModel(); // variável que vai guardar os dados da lista
```

Poderíamos tornar essa função Q_INVOKABLE e chamá-la no QML para ter acesso ao _GroupDataModel_, mas o que nós queremos é que quando algum ítem seja adicionado, a lista seja recarregada automaticamente. Para fazer isso, o Qt nos oferece uma macro chamada Q_PROPERTY, que vai ficar logo abaixo do Q_OBJECT, desse jeito:

```
Q_OBJECT
Q_PROPERTY(bb::cascades::GroupDataModel model READ getModel NOTIFY onModelChanged)
```

O que essa macro diz é que, quando tentarmos ler a variável _model_ no QML, vamos ter acesso ao dados pelo método getModel(), e vamos usar uma função para notificar o ListView do QML quando os dados mudarem (ex: quando você adicionar novos items). Vamos criar o sinal para ser emitido quando a lista for recarregada:

```cpp
public:
    ApplicationUI();
    virtual ~ApplicationUI() {}
    bb::cascades::GroupDataModel * getModel();
signals:
    void onModelChanged(); // emitido quando adicionar itens ao GroupDataModel
```

Pronto, nosso arquivo _applicationui.hpp_ inteiro ficará assim:

```cpp
#ifndef ApplicationUI_HPP_
#define ApplicationUI_HPP_

#include <QObject>
#include <bb/cascades/GroupDataModel>

namespace bb
{
    namespace cascades
    {
        class LocaleHandler;
    }
}

class QTranslator;

/*!
 * @brief Application UI object
 *
 * Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ApplicationUI : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bb::cascades::GroupDataModel model READ getModel NOTIFY onModelChanged)
public:
    ApplicationUI();
    virtual ~ApplicationUI() {}
    bb::cascades::GroupDataModel * getModel();
signals:
    void onModelChanged();
private slots:
    void onSystemLanguageChanged();
private:
    QTranslator* m_pTranslator;
    bb::cascades::LocaleHandler* m_pLocaleHandler;
    bb::cascades::GroupDataModel * m_model;
};

#endif /* ApplicationUI_HPP_ */
```
