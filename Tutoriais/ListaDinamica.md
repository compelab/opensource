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

Depois vamos completar o QML com os dados que queremos, mas antes precisamos criar nossa lista em C++. Abra o arquivo _applicationui.hpp_ e abaixo do include do QObject adicione o include do _GroupDataModel_:

```qml
#include <QObject>
#include <bb/cascades/GroupDataModel>
```

Em seguida, vamos criar uma variável que será a nossa lista.
