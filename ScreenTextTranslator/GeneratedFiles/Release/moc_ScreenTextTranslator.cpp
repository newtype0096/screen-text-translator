/****************************************************************************
** Meta object code from reading C++ file 'ScreenTextTranslator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ScreenTextTranslator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenTextTranslator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenTextTranslator_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenTextTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenTextTranslator_t qt_meta_stringdata_ScreenTextTranslator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ScreenTextTranslator"
QT_MOC_LITERAL(1, 21, 14), // "openForm_About"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "openForm_Settings"
QT_MOC_LITERAL(4, 55, 9), // "selectROI"
QT_MOC_LITERAL(5, 65, 9), // "testTrans"
QT_MOC_LITERAL(6, 75, 6), // "addKey"
QT_MOC_LITERAL(7, 82, 15), // "ChangeTransMode"
QT_MOC_LITERAL(8, 98, 10), // "BackToMain"
QT_MOC_LITERAL(9, 109, 14), // "SelectTransROI"
QT_MOC_LITERAL(10, 124, 10), // "StartTrans"
QT_MOC_LITERAL(11, 135, 7) // "ShowROI"

    },
    "ScreenTextTranslator\0openForm_About\0"
    "\0openForm_Settings\0selectROI\0testTrans\0"
    "addKey\0ChangeTransMode\0BackToMain\0"
    "SelectTransROI\0StartTrans\0ShowROI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenTextTranslator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScreenTextTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenTextTranslator *_t = static_cast<ScreenTextTranslator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openForm_About(); break;
        case 1: _t->openForm_Settings(); break;
        case 2: _t->selectROI(); break;
        case 3: _t->testTrans(); break;
        case 4: _t->addKey(); break;
        case 5: _t->ChangeTransMode(); break;
        case 6: _t->BackToMain(); break;
        case 7: _t->SelectTransROI(); break;
        case 8: _t->StartTrans(); break;
        case 9: _t->ShowROI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ScreenTextTranslator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScreenTextTranslator.data,
      qt_meta_data_ScreenTextTranslator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScreenTextTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenTextTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenTextTranslator.stringdata0))
        return static_cast<void*>(const_cast< ScreenTextTranslator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ScreenTextTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
