set(PACKAGE_VERSION "1.14.0")

if(PACKAGE_VERSION VERSION_LESS PACKAGE_FIND_VERSION)
	set(PACKAGE_VERSION_COMPATIBLE FALSE)
else()
	set(PACKAGE_VERSION_COMPATIBLE TRUE)
	if(PACKAGE_FIND_VERSION STREQUAL PACKAGE_VERSION)
		set(PACKAGE_VERSION_EXACT TRUE)
	endif()
endif()

if("FALSE")
	return()
endif()

if("${CMAKE_SIZEOF_VOID_P}" STREQUAL "" OR "8" STREQUAL "")
	return()
endif()

if(NOT CMAKE_SIZEOF_VOID_P STREQUAL "8")
	math(EXPR installedBits "8 * 8")
	set(PACKAGE_VERSION "${PACKAGE_VERSION} (${installedBits}bit)")
	set(PACKAGE_VERSION_UNSUITABLE TRUE)
endif()
		
