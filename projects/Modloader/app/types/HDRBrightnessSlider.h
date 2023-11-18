#pragma once
#include <Modloader/app/structs/HDRBrightnessSlider.h>
#include <Modloader/app/structs/HDRBrightnessSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRBrightnessSlider {
        inline app::HDRBrightnessSlider__Class** type_info() {
            static app::HDRBrightnessSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRBrightnessSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRBrightnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRBrightnessSlider__Class>(type_info(), "", "HDRBrightnessSlider");
        }
        inline app::HDRBrightnessSlider* create() {
            return il2cpp::create_object<app::HDRBrightnessSlider>(get_class());
        }
    } // namespace HDRBrightnessSlider
} // namespace app::classes::types
