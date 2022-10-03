#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInput__Class** type_info;
        inline app::PlayerInput__Class* get_class() {
            return il2cpp::get_class<app::PlayerInput__Class>(type_info, "", "PlayerInput");
        }
        inline app::PlayerInput* create() {
            return il2cpp::create_object<app::PlayerInput>(get_class());
        }
    } // namespace PlayerInput
} // namespace app::classes::types
