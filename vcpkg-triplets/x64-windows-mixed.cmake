set(VCPKG_TARGET_ARCHITECTURE x64)

if(${PORT} MATCHES "discord")
    set(VCPKG_CRT_LINKAGE static)
    set(VCPKG_LIBRARY_LINKAGE dynamic)
else()
    set(VCPKG_CRT_LINKAGE static)
    set(VCPKG_LIBRARY_LINKAGE static)
endif()
