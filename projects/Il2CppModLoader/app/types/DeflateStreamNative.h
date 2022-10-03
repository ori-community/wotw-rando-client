#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamNative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStreamNative__Class** type_info;
        inline app::DeflateStreamNative__Class* get_class() {
            return il2cpp::get_class<app::DeflateStreamNative__Class>(type_info, "System.IO.Compression", "DeflateStreamNative");
        }
        inline app::DeflateStreamNative* create() {
            return il2cpp::create_object<app::DeflateStreamNative>(get_class());
        }
    } // namespace DeflateStreamNative
} // namespace app::classes::types
