#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FXAA_Preset_LayoutAttribute {
        namespace {
            inline app::FXAA_Preset_LayoutAttribute__Class* type_info_ref = nullptr;
        }
        inline app::FXAA_Preset_LayoutAttribute__Class** type_info = &type_info_ref;
        inline app::FXAA_Preset_LayoutAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_Preset_LayoutAttribute__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA+Preset", "LayoutAttribute");
        }
        inline app::FXAA_Preset_LayoutAttribute* create() {
            return il2cpp::create_object<app::FXAA_Preset_LayoutAttribute>(get_class());
        }
    } // namespace FXAA_Preset_LayoutAttribute
} // namespace app::classes::types
