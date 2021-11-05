/****************************************************************************
** Meta object code from reading C++ file 'gestao_log.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../contole_estoque/gestao_log.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestao_log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gestao_log_t {
    const uint offsetsAndSize[12];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_gestao_log_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_gestao_log_t qt_meta_stringdata_gestao_log = {
    {
QT_MOC_LITERAL(0, 10), // "gestao_log"
QT_MOC_LITERAL(11, 24), // "on_btn_gl_voltar_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 26), // "on_btn_gl_gerarPDF_clicked"
QT_MOC_LITERAL(64, 26), // "on_btn_gl_AbrirPdf_clicked"
QT_MOC_LITERAL(91, 25) // "on_btn_gl_filtrar_clicked"

    },
    "gestao_log\0on_btn_gl_voltar_clicked\0"
    "\0on_btn_gl_gerarPDF_clicked\0"
    "on_btn_gl_AbrirPdf_clicked\0"
    "on_btn_gl_filtrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gestao_log[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gestao_log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gestao_log *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_gl_voltar_clicked(); break;
        case 1: _t->on_btn_gl_gerarPDF_clicked(); break;
        case 2: _t->on_btn_gl_AbrirPdf_clicked(); break;
        case 3: _t->on_btn_gl_filtrar_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject gestao_log::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gestao_log.offsetsAndSize,
    qt_meta_data_gestao_log,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_gestao_log_t
, QtPrivate::TypeAndForceComplete<gestao_log, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *gestao_log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestao_log::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gestao_log.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gestao_log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
