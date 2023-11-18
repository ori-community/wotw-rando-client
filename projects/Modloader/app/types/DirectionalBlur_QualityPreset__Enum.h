#pragma once
#include <Modloader/app/structs/DirectionalBlur_QualityPreset__Enum.h>
#include <Modloader/app/structs/DirectionalBlur_QualityPreset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalBlur_QualityPreset__Enum {
        inline app::DirectionalBlur_QualityPreset__Enum__Class** type_info() {
            static app::DirectionalBlur_QualityPreset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DirectionalBlur_QualityPreset__Enum__Class>(type_info(), "Colorful", "DirectionalBlur", "QualityPreset");
        }
        inline app::DirectionalBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::DirectionalBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace DirectionalBlur_QualityPreset__Enum
} // namespace app::classes::types
