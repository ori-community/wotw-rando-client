#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_SettingsGroup {
        namespace {
            app::LensAberrations_SettingsGroup__Class* type_info_ref = nullptr;
        }
        app::LensAberrations_SettingsGroup__Class** type_info = &type_info_ref;
        inline app::LensAberrations_SettingsGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_SettingsGroup__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "SettingsGroup");
        }
        inline app::LensAberrations_SettingsGroup* create() {
            return il2cpp::create_object<app::LensAberrations_SettingsGroup>(get_class());
        }
    } // namespace LensAberrations_SettingsGroup
} // namespace app::classes::types
