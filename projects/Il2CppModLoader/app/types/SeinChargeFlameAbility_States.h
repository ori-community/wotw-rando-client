#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChargeFlameAbility_States__Class** type_info;
        inline app::SeinChargeFlameAbility_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeFlameAbility_States__Class>(type_info, "", "SeinChargeFlameAbility", "States");
        }
        inline app::SeinChargeFlameAbility_States* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility_States>(get_class());
        }
    } // namespace SeinChargeFlameAbility_States
} // namespace app::classes::types
