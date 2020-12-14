
set(CATCH_TEST_SRC test_catch.cpp )
set(GOOGLE_TEST_SRC test_google.cpp)

set(CATCH_TEST_BINARY test_catch)
set(GOOGLE_TEST_BINARY test_google)

set(MYLIBRARIES mymath myfile)
set(GOOGLE_TEST_LIBRARIES gtest gtest_main)
set(OTHER_LIBRARIES stdc++fs)


##### Catch Testing ###############################################################
add_executable(${CATCH_TEST_BINARY} ${CATCH_TEST_SRC})
target_include_directories(${CATCH_TEST_BINARY} PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_directories(${CATCH_TEST_BINARY} PRIVATE ${CMAKE_SOURCE_DIR}/lib/freelance_project)
target_link_libraries(${CATCH_TEST_BINARY} ${MYLIBRARIES} ${OTHER_LIBRARIES})

####### Google Testing #############################################################

add_executable(${GOOGLE_TEST_BINARY} ${GOOGLE_TEST_SRC})
target_include_directories(${GOOGLE_TEST_BINARY} PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(${GOOGLE_TEST_BINARY} ${GOOGLE_TEST_LIBRARIES} ${MYLIBRARIES} ${OTHER_LIBRARIES})


