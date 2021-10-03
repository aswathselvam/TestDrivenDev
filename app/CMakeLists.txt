add_library(libpid SHARED PidController.cpp)
add_executable(shell-app main.cpp)
target_link_libraries(shell-app libpid)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
