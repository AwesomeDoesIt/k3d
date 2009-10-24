SET(K3D_DBUS_FOUND 0)

INCLUDE(K3DFindPkgConfig)
PKG_CHECK_MODULES(DBUS dbus-glib-1)

IF(DBUS_FOUND)
	SET(K3D_DBUS_INCLUDE_DIRS
		${DBUS_INCLUDE_DIRS}
		)

	SET(K3D_DBUS_LIB_DIRS
		${DBUS_LIBRARY_DIRS}
		)

	SET(K3D_DBUS_LIBS
		${DBUS_LIBRARIES}
		)

	SET(K3D_DBUS_FOUND 1)
ENDIF(DBUS_FOUND)
