#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility_ChargeFlameDefinitions {
        namespace {
            inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* type_info_ref = nullptr;
        }
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class** type_info = &type_info_ref;
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeFlameAbility_ChargeFlameDefinitions__Class>(type_info, "", "SeinChargeFlameAbility", "ChargeFlameDefinitions");
        }
        inline app::SeinChargeFlameAbility_ChargeFlameDefinitions* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility_ChargeFlameDefinitions>(get_class());
        }
    } // namespace SeinChargeFlameAbility_ChargeFlameDefinitions
} // namespace app::classes::types
