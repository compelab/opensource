/****************************************************************************
** Meta object code from reading C++ file 'Lista.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Lista.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lista.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Lista[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // methods: signature, parameters, type, tag, flags
      40,    6,   24,    6, 0x02,
      48,    6,    6,    6, 0x02,

 // properties: name, type, flags
      58,   24, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_Lista[] = {
    "Lista\0\0onModelChanged()\0GroupDataModel*\0"
    "model()\0addList()\0model\0"
};

void Lista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Lista *_t = static_cast<Lista *>(_o);
        switch (_id) {
        case 0: _t->onModelChanged(); break;
        case 1: { GroupDataModel* _r = _t->model();
            if (_a[0]) *reinterpret_cast< GroupDataModel**>(_a[0]) = _r; }  break;
        case 2: _t->addList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Lista::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Lista::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Lista,
      qt_meta_data_Lista, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Lista::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Lista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Lista::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lista))
        return static_cast<void*>(const_cast< Lista*>(this));
    return QObject::qt_metacast(_clname);
}

int Lista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GroupDataModel**>(_v) = model(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Lista::onModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
