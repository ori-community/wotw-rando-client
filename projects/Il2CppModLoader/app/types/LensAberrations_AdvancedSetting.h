#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LensAberrations_AdvancedSetting {
        namespace {
            inline app::LensAberrations_AdvancedSetting__Class* type_info_ref = nullptr;
        }
        inline app::LensAberrations_AdvancedSetting__Class** type_info = &type_info_ref;
        inline app::LensAberrations_AdvancedSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_AdvancedSetting__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "AdvancedSetting");
        }
        inline app::LensAberrations_AdvancedSetting* create() {
            return il2cpp::create_object<app::LensAberrations_AdvancedSetting>(get_class());
        }
    } // namespace LensAberrations_AdvancedSetting
} // namespace app::classes::types
