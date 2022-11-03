#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRSettings_LayoutAttribute {
        namespace {
            inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection+SSRSettings", "LayoutAttribute");
        }
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRSettings_LayoutAttribute>(get_class());
        }
    } // namespace ScreenSpaceReflection_SSRSettings_LayoutAttribute
} // namespace app::classes::types
