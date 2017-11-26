project(OpenCVTest)
find_package(OpenCV REQUIRED)
add_executable(OpenCVTest ../OpenCVTest/main.cpp)
target_link_libraries(OpenCVTest ${OpenCV_LIBS})
