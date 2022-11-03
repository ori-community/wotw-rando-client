#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HDRUIBrightnessSlider {
        namespace {
            inline app::HDRUIBrightnessSlider__Class* type_info_ref = nullptr;
        }
        inline app::HDRUIBrightnessSlider__Class** type_info = &type_info_ref;
        inline app::HDRUIBrightnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRUIBrightnessSlider__Class>(type_info, "", "HDRUIBrightnessSlider");
        }
        inline app::HDRUIBrightnessSlider* create() {
            return il2cpp::create_object<app::HDRUIBrightnessSlider>(get_class());
        }
    } // namespace HDRUIBrightnessSlider
} // namespace app::classes::types
