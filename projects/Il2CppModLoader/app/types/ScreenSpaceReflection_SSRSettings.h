#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScreenSpaceReflection_SSRSettings__Class** type_info;
        inline app::ScreenSpaceReflection_SSRSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "SSRSettings");
        }
        inline app::ScreenSpaceReflection_SSRSettings* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRSettings>(get_class());
        }
        inline app::ScreenSpaceReflection_SSRSettings__Boxed* box(app::ScreenSpaceReflection_SSRSettings value) {
            return il2cpp::box_value<app::ScreenSpaceReflection_SSRSettings__Boxed>(get_class(), value);
        }
    } // namespace ScreenSpaceReflection_SSRSettings
} // namespace app::classes::types
