CMAKE_MINIMUM_REQUIRED( VERSION 2.6 )
PROJECT( MRIM )

#message(STATUS "Mail.ru not yet implemented, so it will be until someone wins the laziness")
#return()

SET( QT_USE_QTNETWORK TRUE )

if(NO_RTF_SUPPORT)
    ADD_DEFINITIONS("-DNO_RTF_SUPPORT")
endif(NO_RTF_SUPPORT)

qutim_add_plugin( mrim
	DISPLAY_NAME "MRIM protocol"
	DESCRIPTION "Implementation of MRIM protocol"
	INCLUDE_DIRS src/base src/3rdparty
	GROUP "Protocols"
)
