set(PackName "util-macros-1.19.3")
message("CMAKE_CURRENT_LIST_DIR : ${CMAKE_CURRENT_LIST_DIR}")
find_path(UTILMACRO
	NAMES 

get_filename_component(XCB_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}" ABSOLUTE)

#for xorg-server configure XCB_CFLAGS XCB_LIBS
message("XCB_LIB_DIR : ${XCB_LIB_DIR}")

message("begin execute configure command")
execute_process(COMMAND ./configure && make install
WORKING_DIRECTORY ${XCB_CMAKE_DIR})

message("execute the configure and make command")


