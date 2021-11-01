#if("${CNAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
#	message(FATAL_ERROR "CMake >= 2.6.0 required")
#endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)

set(CMAKE_IMPORT_FILE_VERSION 1)


get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_DIR}/lib" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
	set(_IMPORT_PREFIX "")
endif()

get_filename_component(XCB_LIB_DIR "${_IMPORT_PREFIX}/lib" ABSOLUTE)
get_filename_component(XCB_INCLUDE_DIR "${_IMPORT_PREFIX}/include" ABSOLUTE)
get_filename_component(XCB_BIN_DIR "${_IMPORT_PREFIX}/bin" ABSOLUTE)
get_filename_component(XCB_SHARE_DIR "${_IMPORT_PREFIX}/share" ABSOLUTE)

mark_as_advanced(XCB_LIB_DIR XCB_INCLUDE_DIR XCB_BIN_DIR XCB_SHARE_DIR)

set(XCB_LIBS
	xcb-composite
	xcb-damage
	xcb-dpms
	xcb-dri2
	xcb-dri3
	xcb-glx
	xcb
	xcb-present
	xcb-randr
	xcb-record
	xcb-render
	xcb-res
	xcb-screensaver
	xcb-shape
	xcb-shm
	xcb-sync
	xcb-xf86dri
	xcb-xfixes
	xcb-xinerama
	xcb-xinput
	xcb-xkb
	xcb-xtest
	xcb-xvmc
	xcb-xv
	)
	
	
foreach(m IN LISTS XCB_LIBS)
	add_library(${m} SHARED IMPORTED)
	set_target_properties(${m} PROPERTIES
		IMPORTED_LOCATION "${XCB_LIB_DIR}/${CMAKE_SHARED_LIBRARY_PREFIX}${m}${CMAKE_SHARED_LIBRARY_SUFFIX}"
	)
endforeach()

set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
		
