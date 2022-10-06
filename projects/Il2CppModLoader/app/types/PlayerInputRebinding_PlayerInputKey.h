#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerInputRebinding_PlayerInputKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerInputRebinding_PlayerInputKey__Class** type_info;
        inline app::PlayerInputRebinding_PlayerInputKey__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerInputRebinding_PlayerInputKey__Class>(type_info, "", "PlayerInputRebinding", "PlayerInputKey");
        }
        inline app::PlayerInputRebinding_PlayerInputKey* create() {
            return il2cpp::create_object<app::PlayerInputRebinding_PlayerInputKey>(get_class());
        }
        inline app::PlayerInputRebinding_PlayerInputKey__Boxed* box(app::PlayerInputRebinding_PlayerInputKey value) {
            return il2cpp::box_value<app::PlayerInputRebinding_PlayerInputKey__Boxed>(get_class(), value);
        }
        inline app::PlayerInputRebinding_PlayerInputKey__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerInputRebinding_PlayerInputKey__Array>(get_class(), size);
        }
        inline app::PlayerInputRebinding_PlayerInputKey__Array* create_array(const std::vector<app::PlayerInputRebinding_PlayerInputKey__Boxed>& items) {
            return il2cpp::array_new<app::PlayerInputRebinding_PlayerInputKey__Array>(get_class(), items);
        }
    } // namespace PlayerInputRebinding_PlayerInputKey
} // namespace app::classes::types
