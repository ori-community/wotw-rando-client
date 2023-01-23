#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FXAA_QualitySettings__Class.h>
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#include <Modloader/app/structs/FXAA_QualitySettings__Boxed.h>

namespace app::classes::types {
    namespace FXAA_QualitySettings {
        namespace {
            inline app::FXAA_QualitySettings__Class* type_info_ref = nullptr;
        }
        inline app::FXAA_QualitySettings__Class** type_info = &type_info_ref;
        inline app::FXAA_QualitySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_QualitySettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA", "QualitySettings");
        }
        inline app::FXAA_QualitySettings* create() {
            return il2cpp::create_object<app::FXAA_QualitySettings>(get_class());
        }
        inline app::FXAA_QualitySettings__Boxed* box(app::FXAA_QualitySettings value) {
            return il2cpp::box_value<app::FXAA_QualitySettings__Boxed>(get_class(), value);
        }
    } // namespace FXAA_QualitySettings
} // namespace app::classes::types
