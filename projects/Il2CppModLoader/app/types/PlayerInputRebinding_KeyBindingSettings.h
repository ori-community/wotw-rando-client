#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInputRebinding_KeyBindingSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInputRebinding_KeyBindingSettings__Class** type_info;
        inline app::PlayerInputRebinding_KeyBindingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputRebinding_KeyBindingSettings__Class>(type_info, "", "PlayerInputRebinding", "KeyBindingSettings");
        }
        inline app::PlayerInputRebinding_KeyBindingSettings* create() {
            return il2cpp::create_object<app::PlayerInputRebinding_KeyBindingSettings>(get_class());
        }
    } // namespace PlayerInputRebinding_KeyBindingSettings
} // namespace app::classes::types
