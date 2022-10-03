#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility_ChargeFlameDefinitions {
        namespace {
            app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* type_info_ref = nullptr;
        }
        app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class** type_info = &type_info_ref;
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class>(type_info, "", "SeinChargeFlameAbility", "ChargeFlameDefinitions");
        }
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility_ChargeFlameDefinitions>(get_class());
        }
    } // namespace SeinChargeFlameAbility_ChargeFlameDefinitions
} // namespace app::classes::types
