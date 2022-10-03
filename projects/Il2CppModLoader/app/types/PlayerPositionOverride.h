#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPositionOverride {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerPositionOverride__Class** type_info;
        inline app::PlayerPositionOverride__Class* get_class() {
            return il2cpp::get_class<app::PlayerPositionOverride__Class>(type_info, "", "PlayerPositionOverride");
        }
        inline app::PlayerPositionOverride* create() {
            return il2cpp::create_object<app::PlayerPositionOverride>(get_class());
        }
    } // namespace PlayerPositionOverride
} // namespace app::classes::types
