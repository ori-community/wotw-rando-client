#pragma once
#include <Modloader/app/structs/HDRUIBrightnessSlider.h>
#include <Modloader/app/structs/HDRUIBrightnessSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRUIBrightnessSlider {
        inline app::HDRUIBrightnessSlider__Class** type_info() {
            static app::HDRUIBrightnessSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRUIBrightnessSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRUIBrightnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRUIBrightnessSlider__Class>(type_info(), "", "HDRUIBrightnessSlider");
        }
        inline app::HDRUIBrightnessSlider* create() {
            return il2cpp::create_object<app::HDRUIBrightnessSlider>(get_class());
        }
    } // namespace HDRUIBrightnessSlider
} // namespace app::classes::types
