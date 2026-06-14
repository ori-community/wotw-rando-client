#pragma once
#include <Modloader/app/structs/LensDistortionBlur_QualityPreset__Enum.h>
#include <Modloader/app/structs/LensDistortionBlur_QualityPreset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensDistortionBlur_QualityPreset__Enum {
        inline app::LensDistortionBlur_QualityPreset__Enum__Class** type_info() {
            static app::LensDistortionBlur_QualityPreset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensDistortionBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensDistortionBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LensDistortionBlur_QualityPreset__Enum__Class>(type_info(), "Colorful", "LensDistortionBlur", "QualityPreset");
        }
        inline app::LensDistortionBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::LensDistortionBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace LensDistortionBlur_QualityPreset__Enum
} // namespace app::classes::types
