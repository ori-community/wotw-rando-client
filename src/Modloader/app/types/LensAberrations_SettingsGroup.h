#pragma once
#include <Modloader/app/structs/LensAberrations_SettingsGroup.h>
#include <Modloader/app/structs/LensAberrations_SettingsGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_SettingsGroup {
        inline app::LensAberrations_SettingsGroup__Class** type_info() {
            static app::LensAberrations_SettingsGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations_SettingsGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations_SettingsGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_SettingsGroup__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations", "SettingsGroup");
        }
        inline app::LensAberrations_SettingsGroup* create() {
            return il2cpp::create_object<app::LensAberrations_SettingsGroup>(get_class());
        }
    } // namespace LensAberrations_SettingsGroup
} // namespace app::classes::types
