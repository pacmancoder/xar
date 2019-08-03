cmake_minimum_required(VERSION 3.10)
project(xar)

set(CMAKE_CXX_STANDARD 11)

find_package(LibXml2 REQUIRED)
find_package(OpenSSL REQUIRED)

file(GLOB XAR_SRC ${PROJECT_SOURCE_DIR}/src/*.c)

add_library(xar STATIC ${XAR_SRC})
target_include_directories(xar PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_include_directories(xar PUBLIC ${LIBXML2_INCLUDE_DIR})
target_link_libraries(xar ${LIBXML2_LIBRARIES})


target_include_directories(xar PUBLIC ${OPENSSL_INCLUDE_DIR})
target_link_libraries(xar ${OPENSSL_CRYPTO_LIBRARY})

target_link_libraries(xar z bz2)

if(UNIX AND NOT APPLE)
    target_link_libraries(xar acl)
endif()

add_executable(xar-app app/xar.c)
set_target_properties(xar-app PROPERTIES OUTPUT_NAME "xar")
target_link_libraries(xar-app xar)
