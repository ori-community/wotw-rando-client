#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateInput__Class** type_info;
        inline app::DeflateInput__Class* get_class() {
            return il2cpp::get_class<app::DeflateInput__Class>(type_info, "Unity.IO.Compression", "DeflateInput");
        }
        inline app::DeflateInput* create() {
            return il2cpp::create_object<app::DeflateInput>(get_class());
        }
    } // namespace DeflateInput
} // namespace app::classes::types
