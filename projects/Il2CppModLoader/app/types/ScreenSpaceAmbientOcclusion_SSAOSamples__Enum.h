#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientOcclusion_SSAOSamples__Enum {
        namespace {
            app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class* type_info_ref = nullptr;
        }
        app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientOcclusion", "SSAOSamples");
        }
        inline app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientOcclusion_SSAOSamples__Enum>(get_class());
        }
    } // namespace ScreenSpaceAmbientOcclusion_SSAOSamples__Enum
} // namespace app::classes::types
