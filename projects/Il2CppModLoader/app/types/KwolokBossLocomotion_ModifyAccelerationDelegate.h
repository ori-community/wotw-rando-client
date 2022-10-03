#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyAccelerationDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class** type_info;
        inline app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class>(type_info, "", "KwolokBossLocomotion", "ModifyAccelerationDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyAccelerationDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyAccelerationDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyAccelerationDelegate
} // namespace app::classes::types
