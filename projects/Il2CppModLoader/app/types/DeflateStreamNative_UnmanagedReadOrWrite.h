#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamNative_UnmanagedReadOrWrite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStreamNative_UnmanagedReadOrWrite__Class** type_info;
        inline app::DeflateStreamNative_UnmanagedReadOrWrite__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStreamNative_UnmanagedReadOrWrite__Class>(type_info, "System.IO.Compression", "DeflateStreamNative", "UnmanagedReadOrWrite");
        }
        inline app::DeflateStreamNative_UnmanagedReadOrWrite* create() {
            return il2cpp::create_object<app::DeflateStreamNative_UnmanagedReadOrWrite>(get_class());
        }
    } // namespace DeflateStreamNative_UnmanagedReadOrWrite
} // namespace app::classes::types
