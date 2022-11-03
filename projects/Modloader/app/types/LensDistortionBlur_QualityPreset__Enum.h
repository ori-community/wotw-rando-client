#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LensDistortionBlur_QualityPreset__Enum {
        namespace {
            inline app::LensDistortionBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LensDistortionBlur_QualityPreset__Enum__Class** type_info = &type_info_ref;
        inline app::LensDistortionBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LensDistortionBlur_QualityPreset__Enum__Class>(type_info, "Colorful", "LensDistortionBlur", "QualityPreset");
        }
        inline app::LensDistortionBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::LensDistortionBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace LensDistortionBlur_QualityPreset__Enum
} // namespace app::classes::types
