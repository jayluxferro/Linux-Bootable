/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Rufus/maindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainDialog_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainDialog_t qt_meta_stringdata_MainDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainDialog"
QT_MOC_LITERAL(1, 11, 13), // "openImageFile"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 24), // "scheduleEnumFlashDevices"
QT_MOC_LITERAL(4, 51, 18), // "writeImageToDevice"
QT_MOC_LITERAL(5, 70, 11), // "clearDevice"
QT_MOC_LITERAL(6, 82, 19), // "showWritingProgress"
QT_MOC_LITERAL(7, 102, 8), // "maxValue"
QT_MOC_LITERAL(8, 111, 19), // "hideWritingProgress"
QT_MOC_LITERAL(9, 131, 17), // "updateProgressBar"
QT_MOC_LITERAL(10, 149, 9), // "increment"
QT_MOC_LITERAL(11, 159, 18), // "showSuccessMessage"
QT_MOC_LITERAL(12, 178, 3), // "msg"
QT_MOC_LITERAL(13, 182, 16), // "showErrorMessage"
QT_MOC_LITERAL(14, 199, 22) // "on_writeButton_clicked"

    },
    "MainDialog\0openImageFile\0\0"
    "scheduleEnumFlashDevices\0writeImageToDevice\0"
    "clearDevice\0showWritingProgress\0"
    "maxValue\0hideWritingProgress\0"
    "updateProgressBar\0increment\0"
    "showSuccessMessage\0msg\0showErrorMessage\0"
    "on_writeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainDialog[] = {

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
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    1,   72,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void MainDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainDialog *_t = static_cast<MainDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openImageFile(); break;
        case 1: _t->scheduleEnumFlashDevices(); break;
        case 2: _t->writeImageToDevice(); break;
        case 3: _t->clearDevice(); break;
        case 4: _t->showWritingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->hideWritingProgress(); break;
        case 6: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showSuccessMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->showErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainDialog.data,
      qt_meta_data_MainDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog.stringdata0))
        return static_cast<void*>(const_cast< MainDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
