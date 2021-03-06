set(PackName "libXfont2-2.0.3")
message("CMAKE_CURRENT_LIST_DIR : ${CMAKE_CURRENT_LIST_DIR}")
get_filename_component(XFONT2_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}" ABSOLUTE)
get_filename_component(XFONT2_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}/include" ABSOLUTE)
get_filename_component(XFONT2_LIB_DIR "${CMAKE_CURRENT_LIST_DIR}/${PackName}/lib" ABSOLUTE)


#for xorg-server configure XFONT2_CFLAGS XFONT2_LIBS
message("XFONT2_LIB_DIR : ${XFONT2_LIB_DIR}")

set(XFONT2_CFLAGS "-I${XFONT2_INCLUDE_DIR} ")
set(XFONT2_LIBS "-L${XFONT2_LIB_DIR} -lXfont2 ")
message("XFONT2_CFLAGS: ${XFONT2_CFLAGS}")
message("XFONT2_LIBS : ${XFONT2_LIBS}")

string(APPEND XSERVERLIBS_CFLAGS ${XFONT2_CFLAGS})
string(APPEND XSERVERLIBS_LIBS ${XFONT2_LIBS})
string(APPEND XSERVERCFLAGS_CFLAGS ${XFONT2_CFLAGS})
string(APPEND XSERVERCFLAGS_LIBS ${XFONT2_LIBS})

