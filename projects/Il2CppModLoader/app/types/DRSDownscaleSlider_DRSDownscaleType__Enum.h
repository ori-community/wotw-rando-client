#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DRSDownscaleSlider_DRSDownscaleType__Enum {
        namespace {
            app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class* type_info_ref = nullptr;
        }
        app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class** type_info = &type_info_ref;
        inline app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class>(type_info, "", "DRSDownscaleSlider", "DRSDownscaleType");
        }
        inline app::DRSDownscaleSlider_DRSDownscaleType__Enum* create() {
            return il2cpp::create_object<app::DRSDownscaleSlider_DRSDownscaleType__Enum>(get_class());
        }
    } // namespace DRSDownscaleSlider_DRSDownscaleType__Enum
} // namespace app::classes::types
