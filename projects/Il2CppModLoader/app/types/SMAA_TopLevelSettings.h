#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SMAA_TopLevelSettings {
        namespace {
            inline app::SMAA_TopLevelSettings__Class* type_info_ref = nullptr;
        }
        inline app::SMAA_TopLevelSettings__Class** type_info = &type_info_ref;
        inline app::SMAA_TopLevelSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_TopLevelSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "TopLevelSettings");
        }
        inline app::SMAA_TopLevelSettings* create() {
            return il2cpp::create_object<app::SMAA_TopLevelSettings>(get_class());
        }
    } // namespace SMAA_TopLevelSettings
} // namespace app::classes::types
