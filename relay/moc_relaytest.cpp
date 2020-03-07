/****************************************************************************
** Meta object code from reading C++ file 'relaytest.h'
**
** Created: Thu Nov 23 23:59:54 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "relaytest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'relaytest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_relaytest[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_relaytest[] = {
    "relaytest\0\0on_RELAY_Button_clicked()\0"
};

const QMetaObject relaytest::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_relaytest,
      qt_meta_data_relaytest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &relaytest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *relaytest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *relaytest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_relaytest))
        return static_cast<void*>(const_cast< relaytest*>(this));
    return QDialog::qt_metacast(_clname);
}

int relaytest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_RELAY_Button_clicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
