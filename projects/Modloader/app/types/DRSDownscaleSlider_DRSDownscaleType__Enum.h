#pragma once
#include <Modloader/app/structs/DRSDownscaleSlider_DRSDownscaleType__Enum.h>
#include <Modloader/app/structs/DRSDownscaleSlider_DRSDownscaleType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DRSDownscaleSlider_DRSDownscaleType__Enum {
        inline app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class** type_info() {
            static app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DRSDownscaleSlider_DRSDownscaleType__Enum__Class>(type_info(), "", "DRSDownscaleSlider", "DRSDownscaleType");
        }
        inline app::DRSDownscaleSlider_DRSDownscaleType__Enum* create() {
            return il2cpp::create_object<app::DRSDownscaleSlider_DRSDownscaleType__Enum>(get_class());
        }
    } // namespace DRSDownscaleSlider_DRSDownscaleType__Enum
} // namespace app::classes::types
