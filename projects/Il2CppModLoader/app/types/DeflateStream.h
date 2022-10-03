#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStream__Class** type_info;
        inline app::DeflateStream__Class* get_class() {
            return il2cpp::get_class<app::DeflateStream__Class>(type_info, "System.IO.Compression", "DeflateStream");
        }
        inline app::DeflateStream* create() {
            return il2cpp::create_object<app::DeflateStream>(get_class());
        }
    } // namespace DeflateStream
} // namespace app::classes::types
