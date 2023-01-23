#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RadialBlur_QualityPreset__Enum__Class.h>
#include <Modloader/app/structs/RadialBlur_QualityPreset__Enum.h>

namespace app::classes::types {
    namespace RadialBlur_QualityPreset__Enum {
        namespace {
            inline app::RadialBlur_QualityPreset__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RadialBlur_QualityPreset__Enum__Class** type_info = &type_info_ref;
        inline app::RadialBlur_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RadialBlur_QualityPreset__Enum__Class>(type_info, "Colorful", "RadialBlur", "QualityPreset");
        }
        inline app::RadialBlur_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::RadialBlur_QualityPreset__Enum>(get_class());
        }
    } // namespace RadialBlur_QualityPreset__Enum
} // namespace app::classes::types
