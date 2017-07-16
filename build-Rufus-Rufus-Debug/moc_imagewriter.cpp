/****************************************************************************
** Meta object code from reading C++ file 'imagewriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Rufus/imagewriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagewriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImageWriter_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageWriter_t qt_meta_stringdata_ImageWriter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageWriter"
QT_MOC_LITERAL(1, 12, 8), // "finished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "success"
QT_MOC_LITERAL(4, 30, 3), // "msg"
QT_MOC_LITERAL(5, 34, 5), // "error"
QT_MOC_LITERAL(6, 40, 9), // "cancelled"
QT_MOC_LITERAL(7, 50, 12), // "blockWritten"
QT_MOC_LITERAL(8, 63, 5), // "count"
QT_MOC_LITERAL(9, 69, 10), // "writeImage"
QT_MOC_LITERAL(10, 80, 13) // "cancelWriting"

    },
    "ImageWriter\0finished\0\0success\0msg\0"
    "error\0cancelled\0blockWritten\0count\0"
    "writeImage\0cancelWriting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageWriter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    0,   56,    2, 0x06 /* Public */,
       7,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   60,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageWriter *_t = static_cast<ImageWriter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->success((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->cancelled(); break;
        case 4: _t->blockWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->writeImage(); break;
        case 6: _t->cancelWriting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImageWriter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageWriter::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ImageWriter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageWriter::success)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ImageWriter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageWriter::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ImageWriter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageWriter::cancelled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ImageWriter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImageWriter::blockWritten)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ImageWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageWriter.data,
      qt_meta_data_ImageWriter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImageWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImageWriter.stringdata0))
        return static_cast<void*>(const_cast< ImageWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ImageWriter::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ImageWriter::success(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageWriter::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ImageWriter::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ImageWriter::blockWritten(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
