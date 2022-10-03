#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireStick {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FireStick__Class** type_info;
        inline app::FireStick__Class* get_class() {
            return il2cpp::get_class<app::FireStick__Class>(type_info, "", "FireStick");
        }
        inline app::FireStick* create() {
            return il2cpp::create_object<app::FireStick>(get_class());
        }
    } // namespace FireStick
} // namespace app::classes::types
