#pragma once
#include <Modloader/app/structs/ScreenSpaceReflection_SSRResolution__Enum.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRResolution__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRResolution__Enum {
        inline app::ScreenSpaceReflection_SSRResolution__Enum__Class** type_info() {
            static app::ScreenSpaceReflection_SSRResolution__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenSpaceReflection_SSRResolution__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenSpaceReflection_SSRResolution__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRResolution__Enum__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "SSRResolution");
        }
        inline app::ScreenSpaceReflection_SSRResolution__Enum* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRResolution__Enum>(get_class());
        }
    } // namespace ScreenSpaceReflection_SSRResolution__Enum
} // namespace app::classes::types
