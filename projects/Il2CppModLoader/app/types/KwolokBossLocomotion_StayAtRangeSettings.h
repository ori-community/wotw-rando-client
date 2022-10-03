#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StayAtRangeSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossLocomotion_StayAtRangeSettings__Class** type_info;
        inline app::KwolokBossLocomotion_StayAtRangeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_StayAtRangeSettings__Class>(type_info, "", "KwolokBossLocomotion", "StayAtRangeSettings");
        }
        inline app::KwolokBossLocomotion_StayAtRangeSettings* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_StayAtRangeSettings>(get_class());
        }
    } // namespace KwolokBossLocomotion_StayAtRangeSettings
} // namespace app::classes::types
