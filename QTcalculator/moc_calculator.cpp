/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created: Sat Oct 8 02:31:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calculator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Calculator[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      50,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     123,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     185,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     223,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Calculator[] = {
    "Calculator\0\0digitClicked()\0"
    "unaryOperatorClicked()\0additiveOperatorClicked()\0"
    "multiplicativeOperatorClicked()\0"
    "equalClicked()\0pointClicked()\0"
    "changeSignClicked()\0backspaceClicked()\0"
    "clear()\0clearAll()\0clearMemory()\0"
    "readMemory()\0setMemory()\0addToMemory()\0"
};

const QMetaObject Calculator::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Calculator,
      qt_meta_data_Calculator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Calculator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator))
        return static_cast<void*>(const_cast< Calculator*>(this));
    return QDialog::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: digitClicked(); break;
        case 1: unaryOperatorClicked(); break;
        case 2: additiveOperatorClicked(); break;
        case 3: multiplicativeOperatorClicked(); break;
        case 4: equalClicked(); break;
        case 5: pointClicked(); break;
        case 6: changeSignClicked(); break;
        case 7: backspaceClicked(); break;
        case 8: clear(); break;
        case 9: clearAll(); break;
        case 10: clearMemory(); break;
        case 11: readMemory(); break;
        case 12: setMemory(); break;
        case 13: addToMemory(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
