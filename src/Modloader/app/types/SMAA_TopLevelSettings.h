#pragma once
#include <Modloader/app/structs/SMAA_TopLevelSettings.h>
#include <Modloader/app/structs/SMAA_TopLevelSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_TopLevelSettings {
        inline app::SMAA_TopLevelSettings__Class** type_info() {
            static app::SMAA_TopLevelSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_TopLevelSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_TopLevelSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_TopLevelSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "TopLevelSettings");
        }
        inline app::SMAA_TopLevelSettings* create() {
            return il2cpp::create_object<app::SMAA_TopLevelSettings>(get_class());
        }
    } // namespace SMAA_TopLevelSettings
} // namespace app::classes::types
