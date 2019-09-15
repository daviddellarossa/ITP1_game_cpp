cmake_minimum_required( VERSION 2.8 FATAL_ERROR )
set( CMAKE_VERBOSE_MAKEFILE ON )

project( ITP1_game_cpp )

get_filename_component( CINDER_PATH "~/Cinder" ABSOLUTE )
get_filename_component( APP_PATH "/home/deedeeaar/CLionProjects/ITP1_game_cpp/" ABSOLUTE )

include( "${CINDER_PATH}/proj/cmake/modules/cinderMakeApp.cmake" )

ci_make_app(
        SOURCES     ${APP_PATH}/src/main.cpp
                    ${APP_PATH}/src/Game.cpp
                    ${APP_PATH}/src/Player.cpp
        INCLUDES ${APP_PATH}/include/
        CINDER_PATH ${CINDER_PATH}
)
