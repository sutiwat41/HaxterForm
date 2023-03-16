/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Osteoporosis/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[23];
    char stringdata5[21];
    char stringdata6[25];
    char stringdata7[20];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[28];
    char stringdata11[22];
    char stringdata12[20];
    char stringdata13[24];
    char stringdata14[22];
    char stringdata15[28];
    char stringdata16[6];
    char stringdata17[29];
    char stringdata18[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 11),  // "playedMusic"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "mediaAndPage"
        QT_MOC_LITERAL(37, 22),  // "on_startButton_clicked"
        QT_MOC_LITERAL(60, 20),  // "on_yesButton_clicked"
        QT_MOC_LITERAL(81, 24),  // "on_notSureButton_clicked"
        QT_MOC_LITERAL(106, 19),  // "on_noButton_clicked"
        QT_MOC_LITERAL(126, 21),  // "on_exportFile_clicked"
        QT_MOC_LITERAL(148, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(170, 27),  // "on_bigBacktoHomeBTN_clicked"
        QT_MOC_LITERAL(198, 21),  // "on_printAgain_clicked"
        QT_MOC_LITERAL(220, 19),  // "on_passPage_clicked"
        QT_MOC_LITERAL(240, 23),  // "on_soundControl_clicked"
        QT_MOC_LITERAL(264, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(286, 27),  // "on_soundSlider_valueChanged"
        QT_MOC_LITERAL(314, 5),  // "value"
        QT_MOC_LITERAL(320, 28),  // "on_printerSettingBtn_clicked"
        QT_MOC_LITERAL(349, 25)   // "on_videoPlayerBox_clicked"
    },
    "MainWindow",
    "playedMusic",
    "",
    "mediaAndPage",
    "on_startButton_clicked",
    "on_yesButton_clicked",
    "on_notSureButton_clicked",
    "on_noButton_clicked",
    "on_exportFile_clicked",
    "on_backButton_clicked",
    "on_bigBacktoHomeBTN_clicked",
    "on_printAgain_clicked",
    "on_passPage_clicked",
    "on_soundControl_clicked",
    "on_pushButton_clicked",
    "on_soundSlider_valueChanged",
    "value",
    "on_printerSettingBtn_clicked",
    "on_videoPlayerBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    0,  117,    2, 0x08,    8 /* Private */,
      10,    0,  118,    2, 0x08,    9 /* Private */,
      11,    0,  119,    2, 0x08,   10 /* Private */,
      12,    0,  120,    2, 0x08,   11 /* Private */,
      13,    0,  121,    2, 0x08,   12 /* Private */,
      14,    0,  122,    2, 0x08,   13 /* Private */,
      15,    1,  123,    2, 0x08,   14 /* Private */,
      17,    0,  126,    2, 0x08,   16 /* Private */,
      18,    0,  127,    2, 0x08,   17 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playedMusic(); break;
        case 1: _t->mediaAndPage(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_yesButton_clicked(); break;
        case 4: _t->on_notSureButton_clicked(); break;
        case 5: _t->on_noButton_clicked(); break;
        case 6: _t->on_exportFile_clicked(); break;
        case 7: _t->on_backButton_clicked(); break;
        case 8: _t->on_bigBacktoHomeBTN_clicked(); break;
        case 9: _t->on_printAgain_clicked(); break;
        case 10: _t->on_passPage_clicked(); break;
        case 11: _t->on_soundControl_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_soundSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_printerSettingBtn_clicked(); break;
        case 15: _t->on_videoPlayerBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
