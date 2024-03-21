cmake_minimum_required(VERSION 3.27)
project(todo_app)

set(CMAKE_CXX_STANDARD 17)

add_executable(todo_app main.cpp
        models/Todo.cpp
        models/Todo.h
)
