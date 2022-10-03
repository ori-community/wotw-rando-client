#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamNative_SafeDeflateStreamHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStreamNative_SafeDeflateStreamHandle__Class** type_info;
        inline app::DeflateStreamNative_SafeDeflateStreamHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStreamNative_SafeDeflateStreamHandle__Class>(type_info, "System.IO.Compression", "DeflateStreamNative", "SafeDeflateStreamHandle");
        }
        inline app::DeflateStreamNative_SafeDeflateStreamHandle* create() {
            return il2cpp::create_object<app::DeflateStreamNative_SafeDeflateStreamHandle>(get_class());
        }
    } // namespace DeflateStreamNative_SafeDeflateStreamHandle
} // namespace app::classes::types
