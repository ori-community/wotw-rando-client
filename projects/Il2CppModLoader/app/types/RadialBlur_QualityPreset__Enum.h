#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RadialBlur_QualityPreset__Enum {
        namespace {
            app::RadialBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
        }
        app::RadialBlur_QualityPreset__Enum__Class** type_info = &type_info_ref;
        inline app::RadialBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RadialBlur_QualityPreset__Enum__Class>(type_info, "Colorful", "RadialBlur", "QualityPreset");
        }
        inline app::RadialBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::RadialBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace RadialBlur_QualityPreset__Enum
} // namespace app::classes::types
