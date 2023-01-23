#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinChargeFlameAbility_States__Class.h>
#include <Modloader/app/structs/SeinChargeFlameAbility_States.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility_States {
        inline app::SeinChargeFlameAbility_States__Class** type_info = (app::SeinChargeFlameAbility_States__Class**)(modloader::win::memory::resolve_rva(0x047526D8));
        inline app::SeinChargeFlameAbility_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeFlameAbility_States__Class>(type_info, "", "SeinChargeFlameAbility", "States");
        }
        inline app::SeinChargeFlameAbility_States* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility_States>(get_class());
        }
    } // namespace SeinChargeFlameAbility_States
} // namespace app::classes::types
