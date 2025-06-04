QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += network

TARGET = SoftPhone
TEMPLATE = app

SOURCES += \
        main.cpp \
        SoftPhone.cpp \
        FileFactory.cpp \
        FileItem.cpp \
        Functions.cpp \
        IniFileIterator.cpp \
        IniFileLoader.cpp \
        PttAdapter.cpp \
        PttManager.cpp \
        SnmpStack.cpp \
        TCPCommunicator.cpp \
        TransportAdapter.cpp \
        UDPCommunicator.cpp \
        Utility.cpp \
        WavWriter.cpp \
        Plotter.cpp

HEADERS += \
        SoftPhone.h \
        Codecs.h \
        ConfigException.h \
        ed137_rtp.h \
        FileFactory.h \
        FileItem.h \
        FileIteratorInterface.h \
        FileLoaderInterface.h \
        IniFileIterator.h \
        IniFileLoader.h \
        IPttListener.h \
        PttAdapter.h \
        PttManager.h \
        SnmpStack.h \
        TCPCommunicator.h \
        TransportAdapter.h \
        UDPCommunicator.h \
        Utility.h \
        WavWriter.h \
        StaticVariables.h \
        Plotter.h

FORMS += \
        SoftPhone.ui

INCLUDEPATH += /home/cejikeme/Codebase/libs/pjproject/pjsip/include
INCLUDEPATH += /home/cejikeme/Codebase/libs/pjproject/pjlib/include
INCLUDEPATH += /home/cejikeme/Codebase/libs/pjproject/pjlib-util/include
INCLUDEPATH += /home/cejikeme/Codebase/libs/pjproject/pjnath/include


# Library search path
LIBS += -L/home/cejikeme/Codebase/libs/pjproject/pjsip/lib

# PJSIP libs (choose the ones you actually use, but this set is safe for most softphones)
LIBS += -lpjsua2 -lpjsua -lpjsip-ua -lpjsip-simple -lpjsip -lpjmedia -lpjmedia-codec -lpjmedia-videodev -lpjmedia-audiodev -lpjmedia -lpjnath -lpjlib-util -lpj

# Other dependencies
LIBS += -lboost_system -lboost_chrono -lboost_thread -ludev
LIBS += -lnetsnmp -lasound
LIBS += -lfftw3


