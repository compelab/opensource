/*
 * Lista.hpp
 *
 *  Created on: 27/02/2015
 *      Author: Felipe
 */

#ifndef LISTA_HPP_
#define LISTA_HPP_

#include <QObject>
#include <bb/cascades/GroupDataModel>

using namespace bb::cascades;

class Lista : public QObject
{
    Q_OBJECT

    Q_PROPERTY(GroupDataModel * model READ model NOTIFY onModelChanged);
public:
    Q_INVOKABLE
        GroupDataModel * model();
    Lista();
    virtual ~Lista();

    Q_INVOKABLE void addList();
private:
GroupDataModel * m_model;

signals:

void onModelChanged();

};


#endif /* LISTA_HPP_ */
