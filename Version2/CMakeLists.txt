cmake_minimum_required(VERSION 3.24)
project(HelloSFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(HelloSFML main.cpp Deck.cpp Deck.h Card.cpp Card.h Column.h Column.cpp Display.h Display.cpp CardContainer.cpp CardContainer.h Test.cpp FoundationPiles.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include)
target_link_libraries(HelloSFML sfml-system sfml-window sfml-graphics sfml-audio sfml-audio)
