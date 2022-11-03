if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/memsharded/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(
   REQUIRES
      fmt/9.1.0
      magic_enum/0.8.1
      nlohmann_json/3.11.2
      antlr4-cppruntime/4.11.1
   GENERATORS
      cmake_find_package
   IMPORTS "bin, *.dll -> ./bin")

conan_cmake_autodetect(settings)

conan_cmake_install(
   PATH_OR_REFERENCE .
   BUILD missing
   OUTPUT_FOLDER ${CMAKE_BINARY_DIR}/conan_output
   INSTALL_FOLDER ${CMAKE_BINARY_DIR}/conan_cmake
   REMOTE conancenter
   SETTINGS ${settings}
   OPTIONS fmt:shared=True)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/conan_cmake")
