#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SMAA_GlobalSettings {
        namespace {
            inline app::SMAA_GlobalSettings__Class* type_info_ref = nullptr;
        }
        inline app::SMAA_GlobalSettings__Class** type_info = &type_info_ref;
        inline app::SMAA_GlobalSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_GlobalSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "GlobalSettings");
        }
        inline app::SMAA_GlobalSettings* create() {
            return il2cpp::create_object<app::SMAA_GlobalSettings>(get_class());
        }
        inline app::SMAA_GlobalSettings__Boxed* box(app::SMAA_GlobalSettings value) {
            return il2cpp::box_value<app::SMAA_GlobalSettings__Boxed>(get_class(), value);
        }
    } // namespace SMAA_GlobalSettings
} // namespace app::classes::types
