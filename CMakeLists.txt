cmake_minimum_required(VERSION 3.26)
project(order_book)

set(CMAKE_CXX_STANDARD 17)

add_executable(order_book src/main.cpp
        src/utils/typing.h
        src/objects/side.h
        src/objects/ticker_data.h
        src/objects/top_of_book.h
        src/objects/order_book_snapshot.h
        src/objects/order_book_update.h
        src/order_book.h
        src/order_book.cpp)
