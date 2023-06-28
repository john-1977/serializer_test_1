Project (Serializer_test_1)
set (SRC main.cpp
        orig_serializer.cpp
        my_serializer.cpp)

set (HEADERS orig_serializer.h
             my_serializer.h)


add_executable(${PROJECT_NAME} ${HEADERS} ${SRC})
