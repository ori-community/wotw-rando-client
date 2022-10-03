#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class** type_info;
        inline app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class>(type_info, "", "KwolokBossLocomotion", "ModifyMaxMovementSpeedDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate
} // namespace app::classes::types
