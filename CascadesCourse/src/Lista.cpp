/*
 * Lista.cpp
 *
 *  Created on: 27/02/2015
 *      Author: Felipe
 */

#include <src/Lista.hpp>

Lista::Lista() : QObject()
{
    qRegisterMetaType<GroupDataModel *>("GroupDataModel *");
        m_model = new GroupDataModel();
        m_model->setSortedAscending(false);
        m_model->setGrouping(bb::cascades::ItemGrouping::None);
    // TODO Auto-generated constructor stub

}

GroupDataModel * Lista::model() {   // Retorna a lista.

    return m_model;
}

Lista::~Lista()
{
    // TODO Auto-generated destructor stub
}

void Lista::addList(){
    QVariantMap test;
        test["nome"] = "Aula";
        test["idade"] = "14";
        m_model->insert(test);
        emit onModelChanged();
}

