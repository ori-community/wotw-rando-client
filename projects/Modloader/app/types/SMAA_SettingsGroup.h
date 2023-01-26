#pragma once
#include <Modloader/app/structs/SMAA_SettingsGroup.h>
#include <Modloader/app/structs/SMAA_SettingsGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_SettingsGroup {
        inline app::SMAA_SettingsGroup__Class** type_info() {
            static app::SMAA_SettingsGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_SettingsGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_SettingsGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_SettingsGroup__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "SettingsGroup");
        }
        inline app::SMAA_SettingsGroup* create() {
            return il2cpp::create_object<app::SMAA_SettingsGroup>(get_class());
        }
    } // namespace SMAA_SettingsGroup
} // namespace app::classes::types
