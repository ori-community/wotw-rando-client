#pragma once
#include <Modloader/app/structs/FXAA_Preset_LayoutAttribute.h>
#include <Modloader/app/structs/FXAA_Preset_LayoutAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_Preset_LayoutAttribute {
        inline app::FXAA_Preset_LayoutAttribute__Class** type_info() {
            static app::FXAA_Preset_LayoutAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FXAA_Preset_LayoutAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FXAA_Preset_LayoutAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_Preset_LayoutAttribute__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "FXAA+Preset", "LayoutAttribute");
        }
        inline app::FXAA_Preset_LayoutAttribute* create() {
            return il2cpp::create_object<app::FXAA_Preset_LayoutAttribute>(get_class());
        }
    } // namespace FXAA_Preset_LayoutAttribute
} // namespace app::classes::types
