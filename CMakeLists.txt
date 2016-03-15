cmake_minimum_required (VERSION 2.8)
project (Lesmotspourledire)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall --coverage")

# Pre-requisites
list (APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_files")
find_package (PETSc REQUIRED)
find_package (CDMATH REQUIRED)

add_executable (lesmotspourledire lesmotspourledire.cxx)
target_link_libraries (lesmotspourledire
    ${CDMATH_LIBRARIES}
    ${PETSC_LIBRARIES})
install (TARGETS lesmotspourledire
    DESTINATION ${CMAKE_INSTALL_PREFIX})
