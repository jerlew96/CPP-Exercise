cmake_minimum_required(VERSION 3.26)
project(cppex11_companymanagementsystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(cppex11_companymanagementsystem main.cpp
        employee.cpp
        employee.h
        technician.cpp
        technician.h
        manager.cpp
        manager.h
        salesman.cpp
        salesman.h
        salesmanager.cpp
        salesmanager.h)
