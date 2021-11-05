/****************************************************************************
** Meta object code from reading C++ file 'janela_principal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../contole_estoque/janela_principal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'janela_principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_janela_principal_t {
    const uint offsetsAndSize[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_janela_principal_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_janela_principal_t qt_meta_stringdata_janela_principal = {
    {
QT_MOC_LITERAL(0, 16), // "janela_principal"
QT_MOC_LITERAL(17, 27), // "on_actionCadastro_triggered"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(70, 34), // "on_principal_btn_atualizar_cl..."
QT_MOC_LITERAL(105, 26), // "on_actionInserir_triggered"
QT_MOC_LITERAL(132, 22), // "on_actionLog_triggered"
QT_MOC_LITERAL(155, 24), // "on_actionSobre_triggered"
QT_MOC_LITERAL(180, 26) // "on_actionRemover_triggered"

    },
    "janela_principal\0on_actionCadastro_triggered\0"
    "\0on_actionSair_triggered\0"
    "on_principal_btn_atualizar_clicked\0"
    "on_actionInserir_triggered\0"
    "on_actionLog_triggered\0on_actionSobre_triggered\0"
    "on_actionRemover_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_janela_principal[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void janela_principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<janela_principal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionCadastro_triggered(); break;
        case 1: _t->on_actionSair_triggered(); break;
        case 2: _t->on_principal_btn_atualizar_clicked(); break;
        case 3: _t->on_actionInserir_triggered(); break;
        case 4: _t->on_actionLog_triggered(); break;
        case 5: _t->on_actionSobre_triggered(); break;
        case 6: _t->on_actionRemover_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject janela_principal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_janela_principal.offsetsAndSize,
    qt_meta_data_janela_principal,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_janela_principal_t
, QtPrivate::TypeAndForceComplete<janela_principal, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *janela_principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *janela_principal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_janela_principal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int janela_principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
