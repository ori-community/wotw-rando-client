#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRReflectionBlendType__Enum {
        namespace {
            inline app::ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRReflectionBlendType__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "SSRReflectionBlendType");
        }
        inline app::ScreenSpaceReflection_SSRReflectionBlendType__Enum* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRReflectionBlendType__Enum>(get_class());
        }
    } // namespace ScreenSpaceReflection_SSRReflectionBlendType__Enum
} // namespace app::classes::types
