cmake_minimum_required(VERSION 3.22)
project(Creational_design_patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(BookShop main.cpp "Product.h" "Saler.h" "Bayer.h" "Manufacturer.h" "Accountant.h"   "Storage.h" "Book.h" "BookBayer.h" "ProductBayer.h" "ProductSaler.h" "BookSaler.h")
