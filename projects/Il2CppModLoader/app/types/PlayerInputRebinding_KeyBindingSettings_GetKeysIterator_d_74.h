#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 {
        inline app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class** type_info = (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class**)(modloader::win::memory::resolve_rva(0x047780A8));
        inline app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74__Class>(type_info, "", "PlayerInputRebinding+KeyBindingSettings", "<GetKeysIterator>d__74");
        }
        inline app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74* create() {
            return il2cpp::create_object<app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74>(get_class());
        }
    } // namespace PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74
} // namespace app::classes::types
