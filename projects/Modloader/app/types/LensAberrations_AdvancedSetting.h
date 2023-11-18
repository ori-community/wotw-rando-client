#pragma once
#include <Modloader/app/structs/LensAberrations_AdvancedSetting.h>
#include <Modloader/app/structs/LensAberrations_AdvancedSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_AdvancedSetting {
        inline app::LensAberrations_AdvancedSetting__Class** type_info() {
            static app::LensAberrations_AdvancedSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations_AdvancedSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations_AdvancedSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_AdvancedSetting__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations", "AdvancedSetting");
        }
        inline app::LensAberrations_AdvancedSetting* create() {
            return il2cpp::create_object<app::LensAberrations_AdvancedSetting>(get_class());
        }
    } // namespace LensAberrations_AdvancedSetting
} // namespace app::classes::types
