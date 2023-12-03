if (NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake")
endif ()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(
        REQUIRES
            zlib/1.2.13
            magic_enum/0.8.1
            nlohmann_json/3.11.2
            ixwebsocket/11.4.3
            protobuf/3.21.9
            tclap/1.2.5
            cppzmq/4.10.0
        GENERATORS
            cmake_find_package
        OPTIONS
            ixwebsocket:tls=mbedtls
            zeromq:encryption=False
)

conan_cmake_autodetect(settings)

conan_cmake_install(
        PATH_OR_REFERENCE .
        BUILD missing
        OUTPUT_FOLDER ${CMAKE_BINARY_DIR}/conan_output
        INSTALL_FOLDER ${CMAKE_BINARY_DIR}/conan_cmake
        REMOTE conancenter
        SETTINGS ${settings}
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/conan_cmake")
