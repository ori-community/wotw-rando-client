#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings__Class.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings__Boxed.h>

namespace app::classes::types {
    namespace LensAberrations_VignetteSettings {
        namespace {
            inline app::LensAberrations_VignetteSettings__Class* type_info_ref = nullptr;
        }
        inline app::LensAberrations_VignetteSettings__Class** type_info = &type_info_ref;
        inline app::LensAberrations_VignetteSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LensAberrations_VignetteSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "LensAberrations", "VignetteSettings");
        }
        inline app::LensAberrations_VignetteSettings* create() {
            return il2cpp::create_object<app::LensAberrations_VignetteSettings>(get_class());
        }
        inline app::LensAberrations_VignetteSettings__Boxed* box(app::LensAberrations_VignetteSettings value) {
            return il2cpp::box_value<app::LensAberrations_VignetteSettings__Boxed>(get_class(), value);
        }
    } // namespace LensAberrations_VignetteSettings
} // namespace app::classes::types
