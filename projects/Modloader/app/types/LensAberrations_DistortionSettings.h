#pragma once
#include <Modloader/app/structs/LensAberrations_DistortionSettings.h>
#include <Modloader/app/structs/LensAberrations_DistortionSettings__Boxed.h>
#include <Modloader/app/structs/LensAberrations_DistortionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_DistortionSettings {
        inline app::LensAberrations_DistortionSettings__Class** type_info() {
            static app::LensAberrations_DistortionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations_DistortionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations_DistortionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_DistortionSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations", "DistortionSettings");
        }
        inline app::LensAberrations_DistortionSettings* create() {
            return il2cpp::create_object<app::LensAberrations_DistortionSettings>(get_class());
        }
        inline app::LensAberrations_DistortionSettings__Boxed* box(app::LensAberrations_DistortionSettings value) {
            return il2cpp::box_value<app::LensAberrations_DistortionSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_DistortionSettings
} // namespace app::classes::types
