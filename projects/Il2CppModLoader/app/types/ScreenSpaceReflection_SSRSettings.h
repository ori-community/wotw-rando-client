#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRSettings {
        inline app::ScreenSpaceReflection_SSRSettings__Class** type_info = (app::ScreenSpaceReflection_SSRSettings__Class**)(modloader::win::memory::resolve_rva(0x047338A0));
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
