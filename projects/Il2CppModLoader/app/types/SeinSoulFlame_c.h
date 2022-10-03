#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlame_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSoulFlame_c__Class** type_info;
        inline app::SeinSoulFlame_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSoulFlame_c__Class>(type_info, "", "SeinSoulFlame", "<>c");
        }
        inline app::SeinSoulFlame_c* create() {
            return il2cpp::create_object<app::SeinSoulFlame_c>(get_class());
        }
    } // namespace SeinSoulFlame_c
} // namespace app::classes::types
