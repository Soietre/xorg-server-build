get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../" ABSOLUTE)

macro(set_and_check_var _file)
	set(${_var} "${_file}")
	if(NOT EXISTS "${_file}")
		message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist!")
	endif()
endmacro()

macro(check_required_component _NAME)
	foreach(comp ${${_NAME}_FIND_COMPONENTS})
		if(NOT ${_NAME}_${comp}_FOUND)
			if(${_NAME}_FIND_REQUIRED_${comp})
				set(${NAME}_FOUND FALSE)
			endif()
		endif()
	endforeach()
endmacro()

include(CMakeFindDependencyMacro)

include("${CMAKE_CURRENT_LIST_DIR}/Xcb.cmake")
