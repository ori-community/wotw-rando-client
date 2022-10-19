#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateStreamNative_UnmanagedReadOrWrite {
        inline app::DeflateStreamNative_UnmanagedReadOrWrite__Class** type_info = (app::DeflateStreamNative_UnmanagedReadOrWrite__Class**)(modloader::win::memory::resolve_rva(0x04711CF0));
        inline app::DeflateStreamNative_UnmanagedReadOrWrite__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStreamNative_UnmanagedReadOrWrite__Class>(type_info, "System.IO.Compression", "DeflateStreamNative", "UnmanagedReadOrWrite");
        }
        inline app::DeflateStreamNative_UnmanagedReadOrWrite* create() {
            return il2cpp::create_object<app::DeflateStreamNative_UnmanagedReadOrWrite>(get_class());
        }
    } // namespace DeflateStreamNative_UnmanagedReadOrWrite
} // namespace app::classes::types
