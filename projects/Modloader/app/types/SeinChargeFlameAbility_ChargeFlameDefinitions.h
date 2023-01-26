#pragma once
#include <Modloader/app/structs/SeinChargeFlameAbility_ChargeFlameDefinitions.h>
#include <Modloader/app/structs/SeinChargeFlameAbility_ChargeFlameDefinitions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility_ChargeFlameDefinitions {
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class** type_info() {
            static app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class>(type_info(), "", "SeinChargeFlameAbility", "ChargeFlameDefinitions");
        }
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility_ChargeFlameDefinitions>(get_class());
        }
    } // namespace SeinChargeFlameAbility_ChargeFlameDefinitions
} // namespace app::classes::types
