#pragma once
#include <Modloader/app/structs/RadialBlur_QualityPreset__Enum.h>
#include <Modloader/app/structs/RadialBlur_QualityPreset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RadialBlur_QualityPreset__Enum {
        inline app::RadialBlur_QualityPreset__Enum__Class** type_info() {
            static app::RadialBlur_QualityPreset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RadialBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RadialBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RadialBlur_QualityPreset__Enum__Class>(type_info(), "Colorful", "RadialBlur", "QualityPreset");
        }
        inline app::RadialBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::RadialBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace RadialBlur_QualityPreset__Enum
} // namespace app::classes::types
