QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gestao_cadastro.cpp \
    gestao_inserir.cpp \
    gestao_log.cpp \
    gestao_remover.cpp \
    main.cpp \
    janela_principal.cpp

HEADERS += \
    gestao_cadastro.h \
    gestao_inserir.h \
    gestao_log.h \
    gestao_remover.h \
    janela_principal.h

FORMS += \
    gestao_cadastro.ui \
    gestao_inserir.ui \
    gestao_log.ui \
    gestao_remover.ui \
    janela_principal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ArquivoDeRecursos.qrc
