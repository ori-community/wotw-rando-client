#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChargeFlameAbility__Class** type_info;
        inline app::SeinChargeFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeFlameAbility__Class>(type_info, "", "SeinChargeFlameAbility");
        }
        inline app::SeinChargeFlameAbility* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility>(get_class());
        }
    } // namespace SeinChargeFlameAbility
} // namespace app::classes::types
