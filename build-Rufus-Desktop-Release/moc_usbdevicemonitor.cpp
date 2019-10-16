/****************************************************************************
** Meta object code from reading C++ file 'usbdevicemonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Rufus/usbdevicemonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbdevicemonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsbDeviceMonitor_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsbDeviceMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsbDeviceMonitor_t qt_meta_stringdata_UsbDeviceMonitor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UsbDeviceMonitor"
QT_MOC_LITERAL(1, 17, 13), // "deviceChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15) // "startMonitoring"

    },
    "UsbDeviceMonitor\0deviceChanged\0\0"
    "startMonitoring"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsbDeviceMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void UsbDeviceMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UsbDeviceMonitor *_t = static_cast<UsbDeviceMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceChanged(); break;
        case 1: { bool _r = _t->startMonitoring();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UsbDeviceMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsbDeviceMonitor::deviceChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UsbDeviceMonitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UsbDeviceMonitor.data,
      qt_meta_data_UsbDeviceMonitor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UsbDeviceMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsbDeviceMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsbDeviceMonitor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    return QObject::qt_metacast(_clname);
}

int UsbDeviceMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UsbDeviceMonitor::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
