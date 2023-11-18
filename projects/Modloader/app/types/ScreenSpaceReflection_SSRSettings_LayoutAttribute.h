#pragma once
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings_LayoutAttribute.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRSettings_LayoutAttribute {
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class** type_info() {
            static app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRSettings_LayoutAttribute__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection+SSRSettings", "LayoutAttribute");
        }
        inline app::ScreenSpaceReflection_SSRSettings_LayoutAttribute* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRSettings_LayoutAttribute>(get_class());
        }
    } // namespace ScreenSpaceReflection_SSRSettings_LayoutAttribute
} // namespace app::classes::types
