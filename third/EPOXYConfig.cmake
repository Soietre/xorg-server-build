set(pacakgeName "libepoxy-1.5.9")

get_filename_component(EPOXY_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}/${pacakgeName}" ABSOLUTE)
get_filename_component(EPOXY_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/${pacakgeName}/include" ABSOLUTE)
get_filename_component(EPOXY_LIB_DIR "${CMAKE_CURRENT_LIST_DIR}/${pacakgeName}/lib/x86_64-linux-gnu" ABSOLUTE)

set(GLAMOR_CFLAGS "-I${EPOXY_INCLUDE_DIR}")
set(GLAMOR_LIBS "-L${EPOXY_LIB_DIR} -lepoxy")

