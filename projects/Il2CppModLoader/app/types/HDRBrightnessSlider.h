#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HDRBrightnessSlider {
        namespace {
            inline app::HDRBrightnessSlider__Class* type_info_ref = nullptr;
        }
        inline app::HDRBrightnessSlider__Class** type_info = &type_info_ref;
        inline app::HDRBrightnessSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRBrightnessSlider__Class>(type_info, "", "HDRBrightnessSlider");
        }
        inline app::HDRBrightnessSlider* create() {
            return il2cpp::create_object<app::HDRBrightnessSlider>(get_class());
        }
    } // namespace HDRBrightnessSlider
} // namespace app::classes::types
