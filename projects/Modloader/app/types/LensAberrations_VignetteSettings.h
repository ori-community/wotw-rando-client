#pragma once
#include <Modloader/app/structs/LensAberrations_VignetteSettings.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings__Boxed.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensAberrations_VignetteSettings {
        inline app::LensAberrations_VignetteSettings__Class** type_info() {
            static app::LensAberrations_VignetteSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensAberrations_VignetteSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensAberrations_VignetteSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_VignetteSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "LensAberrations", "VignetteSettings");
        }
        inline app::LensAberrations_VignetteSettings* create() {
            return il2cpp::create_object<app::LensAberrations_VignetteSettings>(get_class());
        }
        inline app::LensAberrations_VignetteSettings__Boxed* box(app::LensAberrations_VignetteSettings value) {
            return il2cpp::box_value<app::LensAberrations_VignetteSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_VignetteSettings
} // namespace app::classes::types
