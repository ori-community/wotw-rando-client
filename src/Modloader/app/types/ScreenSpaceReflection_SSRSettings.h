#pragma once
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings__Boxed.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection_SSRSettings {
        inline app::ScreenSpaceReflection_SSRSettings__Class** type_info() {
            static app::ScreenSpaceReflection_SSRSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScreenSpaceReflection_SSRSettings__Class**)(modloader::win::memory::resolve_rva(0x047338A0));
            }
            return cache;
        }
        inline app::ScreenSpaceReflection_SSRSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceReflection_SSRSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection", "SSRSettings");
        }
        inline app::ScreenSpaceReflection_SSRSettings* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection_SSRSettings>(get_class());
        }
        inline app::ScreenSpaceReflection_SSRSettings__Boxed* box(app::ScreenSpaceReflection_SSRSettings value) {
            return il2cpp::box_value<app::ScreenSpaceReflection_SSRSettings__Boxed>(get_class(), value);
        }
    } // namespace ScreenSpaceReflection_SSRSettings
} // namespace app::classes::types
