set(PackName "libxcb-1.14")
message("CMAKE_CURRENT_LIST_DIR : ${CMAKE_CURRENT_LIST_DIR}")
get_filename_component(XCB_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}" ABSOLUTE)
get_filename_component(XCB_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}/include" ABSOLUTE)
get_filename_component(XCB_LIB_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}/lib" ABSOLUTE)


#for xorg-server configure XCB_CFLAGS XCB_LIBS
message("XCB_LIB_DIR : ${XCB_LIB_DIR}")

set(XCB_CFLAGS "-I${XCB_INCLUDE_DIR} ")
set(XCB_LIBS "-L${XCB_LIB_DIR} -lxcb ")
message("XCB_CFLAGS: ${XCB_CFLAGS}")
message("XCB_LIBS : ${XCB_LIBS}")

string(APPEND XSERVERLIBS_CFLAGS ${XCB_CFLAGS})
string(APPEND XSERVERLIBS_LIBS ${XCB_LIBS})
string(APPEND XSERVERCFLAGS_CFLAGS ${XCB_CFLAGS})
string(APPEND XSERVERCFLAGS_LIBS ${XCB_LIBS})
