add_executable(bloom-spv_tests test_core.cpp)
target_link_libraries(bloom-spv_tests PRIVATE wallet)
target_include_directories(bloom-spv_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND bloom-spv_tests)
