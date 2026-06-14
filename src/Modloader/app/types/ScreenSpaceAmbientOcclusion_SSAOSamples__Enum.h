#pragma once
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion_SSAOSamples__Enum.h>
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientOcclusion_SSAOSamples__Enum {
        inline app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class** type_info() {
            static app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientOcclusion", "SSAOSamples");
        }
        inline app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum>(get_class());
        }
    } // namespace ScreenSpaceAmbientOcclusion_SSAOSamples__Enum
} // namespace app::classes::types
