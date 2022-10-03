#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectionalBlur_QualityPreset__Enum {
        namespace {
            app::DirectionalBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
        }
        app::DirectionalBlur_QualityPreset__Enum__Class** type_info = &type_info_ref;
        inline app::DirectionalBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DirectionalBlur_QualityPreset__Enum__Class>(type_info, "Colorful", "DirectionalBlur", "QualityPreset");
        }
        inline app::DirectionalBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::DirectionalBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace DirectionalBlur_QualityPreset__Enum
} // namespace app::classes::types
