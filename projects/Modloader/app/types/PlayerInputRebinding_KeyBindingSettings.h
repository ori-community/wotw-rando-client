#pragma once
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInputRebinding_KeyBindingSettings {
        inline app::PlayerInputRebinding_KeyBindingSettings__Class** type_info() {
            static app::PlayerInputRebinding_KeyBindingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerInputRebinding_KeyBindingSettings__Class**)(modloader::win::memory::resolve_rva(0x047697C0));
            }
            return cache;
        }
        inline app::PlayerInputRebinding_KeyBindingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputRebinding_KeyBindingSettings__Class>(type_info(), "", "PlayerInputRebinding", "KeyBindingSettings");
        }
        inline app::PlayerInputRebinding_KeyBindingSettings* create() {
            return il2cpp::create_object<app::PlayerInputRebinding_KeyBindingSettings>(get_class());
        }
    } // namespace PlayerInputRebinding_KeyBindingSettings
} // namespace app::classes::types
