#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_DistortionSettings {
        namespace {
            app::LensAberrations_DistortionSettings__Class* type_info_ref = nullptr;
        }
        app::LensAberrations_DistortionSettings__Class** type_info = &type_info_ref;
        inline app::LensAberrations_DistortionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_DistortionSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "DistortionSettings");
        }
        inline app::LensAberrations_DistortionSettings* create() {
            return il2cpp::create_object<app::LensAberrations_DistortionSettings>(get_class());
        }
        inline app::LensAberrations_DistortionSettings__Boxed* box(app::LensAberrations_DistortionSettings value) {
            return il2cpp::box_value<app::LensAberrations_DistortionSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_DistortionSettings
} // namespace app::classes::types
