/****************************************************************************
** Meta object code from reading C++ file 'calibratearena.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calibratearena.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibratearena.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CalibrateArena_t {
    QByteArrayData data[27];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibrateArena_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibrateArena_t qt_meta_stringdata_CalibrateArena = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CalibrateArena"
QT_MOC_LITERAL(1, 15, 12), // "errorMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "setImage0"
QT_MOC_LITERAL(4, 39, 9), // "setImage1"
QT_MOC_LITERAL(5, 49, 9), // "setImage2"
QT_MOC_LITERAL(6, 59, 9), // "setImage3"
QT_MOC_LITERAL(7, 69, 17), // "setFeaturesImage0"
QT_MOC_LITERAL(8, 87, 17), // "setFeaturesImage1"
QT_MOC_LITERAL(9, 105, 17), // "setFeaturesImage2"
QT_MOC_LITERAL(10, 123, 17), // "setFeaturesImage3"
QT_MOC_LITERAL(11, 141, 16), // "setStitchedImage"
QT_MOC_LITERAL(12, 158, 15), // "setSquaredImage"
QT_MOC_LITERAL(13, 174, 15), // "extractFeatures"
QT_MOC_LITERAL(14, 190, 20), // "setCalibrationImages"
QT_MOC_LITERAL(15, 211, 11), // "vector<Mat>"
QT_MOC_LITERAL(16, 223, 25), // "setFeatureFinderThreshold"
QT_MOC_LITERAL(17, 249, 19), // "setMatcherThreshold"
QT_MOC_LITERAL(18, 269, 12), // "stitchImages"
QT_MOC_LITERAL(19, 282, 16), // "stitcherFinished"
QT_MOC_LITERAL(20, 299, 13), // "pointSelected"
QT_MOC_LITERAL(21, 313, 10), // "resetPoint"
QT_MOC_LITERAL(22, 324, 11), // "squareArena"
QT_MOC_LITERAL(23, 336, 15), // "saveCalibration"
QT_MOC_LITERAL(24, 352, 8), // "zoomMove"
QT_MOC_LITERAL(25, 361, 12), // "zoomMoveDone"
QT_MOC_LITERAL(26, 374, 26) // "getCameraCalibrationImages"

    },
    "CalibrateArena\0errorMessage\0\0setImage0\0"
    "setImage1\0setImage2\0setImage3\0"
    "setFeaturesImage0\0setFeaturesImage1\0"
    "setFeaturesImage2\0setFeaturesImage3\0"
    "setStitchedImage\0setSquaredImage\0"
    "extractFeatures\0setCalibrationImages\0"
    "vector<Mat>\0setFeatureFinderThreshold\0"
    "setMatcherThreshold\0stitchImages\0"
    "stitcherFinished\0pointSelected\0"
    "resetPoint\0squareArena\0saveCalibration\0"
    "zoomMove\0zoomMoveDone\0getCameraCalibrationImages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibrateArena[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       3,    1,  137,    2, 0x06 /* Public */,
       4,    1,  140,    2, 0x06 /* Public */,
       5,    1,  143,    2, 0x06 /* Public */,
       6,    1,  146,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,
       8,    1,  152,    2, 0x06 /* Public */,
       9,    1,  155,    2, 0x06 /* Public */,
      10,    1,  158,    2, 0x06 /* Public */,
      11,    1,  161,    2, 0x06 /* Public */,
      12,    1,  164,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  167,    2, 0x0a /* Public */,
      14,    1,  168,    2, 0x0a /* Public */,
      16,    1,  171,    2, 0x0a /* Public */,
      17,    1,  174,    2, 0x0a /* Public */,
      18,    0,  177,    2, 0x0a /* Public */,
      19,    0,  178,    2, 0x0a /* Public */,
      20,    1,  179,    2, 0x0a /* Public */,
      21,    0,  182,    2, 0x0a /* Public */,
      22,    0,  183,    2, 0x0a /* Public */,
      23,    0,  184,    2, 0x0a /* Public */,
      24,    1,  185,    2, 0x0a /* Public */,
      25,    0,  188,    2, 0x0a /* Public */,
      26,    0,  189,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    0x80000000 | 15,

       0        // eod
};

void CalibrateArena::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalibrateArena *_t = static_cast<CalibrateArena *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setImage0((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->setImage1((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 3: _t->setImage2((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 4: _t->setImage3((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 5: _t->setFeaturesImage0((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 6: _t->setFeaturesImage1((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 7: _t->setFeaturesImage2((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 8: _t->setFeaturesImage3((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 9: _t->setStitchedImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 10: _t->setSquaredImage((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 11: _t->extractFeatures(); break;
        case 12: _t->setCalibrationImages((*reinterpret_cast< vector<Mat>(*)>(_a[1]))); break;
        case 13: _t->setFeatureFinderThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setMatcherThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->stitchImages(); break;
        case 16: _t->stitcherFinished(); break;
        case 17: _t->pointSelected((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 18: _t->resetPoint(); break;
        case 19: _t->squareArena(); break;
        case 20: _t->saveCalibration(); break;
        case 21: _t->zoomMove((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 22: _t->zoomMoveDone(); break;
        case 23: { vector<Mat> _r = _t->getCameraCalibrationImages();
            if (_a[0]) *reinterpret_cast< vector<Mat>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CalibrateArena::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::errorMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setImage0)) {
                *result = 1;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setImage1)) {
                *result = 2;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setImage2)) {
                *result = 3;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setImage3)) {
                *result = 4;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setFeaturesImage0)) {
                *result = 5;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setFeaturesImage1)) {
                *result = 6;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setFeaturesImage2)) {
                *result = 7;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setFeaturesImage3)) {
                *result = 8;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setStitchedImage)) {
                *result = 9;
            }
        }
        {
            typedef void (CalibrateArena::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CalibrateArena::setSquaredImage)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject CalibrateArena::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CalibrateArena.data,
      qt_meta_data_CalibrateArena,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CalibrateArena::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrateArena::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrateArena.stringdata0))
        return static_cast<void*>(const_cast< CalibrateArena*>(this));
    return QObject::qt_metacast(_clname);
}

int CalibrateArena::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void CalibrateArena::errorMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalibrateArena::setImage0(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CalibrateArena::setImage1(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CalibrateArena::setImage2(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CalibrateArena::setImage3(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CalibrateArena::setFeaturesImage0(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CalibrateArena::setFeaturesImage1(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CalibrateArena::setFeaturesImage2(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CalibrateArena::setFeaturesImage3(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CalibrateArena::setStitchedImage(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CalibrateArena::setSquaredImage(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
