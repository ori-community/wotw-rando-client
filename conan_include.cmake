# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/memsharded/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(
   REQUIRES
      fmt/6.1.2
      magic_enum/0.8.0
   GENERATORS
      cmake_find_package)

conan_cmake_autodetect(settings)

conan_cmake_install(
   PATH_OR_REFERENCE .
   BUILD missing
   REMOTE conancenter
   SETTINGS ${settings})
