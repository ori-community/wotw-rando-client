#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSoulFlame__Class** type_info;
        inline app::SeinSoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlame__Class>(type_info, "", "SeinSoulFlame");
        }
        inline app::SeinSoulFlame* create() {
            return il2cpp::create_object<app::SeinSoulFlame>(get_class());
        }
    } // namespace SeinSoulFlame
} // namespace app::classes::types
