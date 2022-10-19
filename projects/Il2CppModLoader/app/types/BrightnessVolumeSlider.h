#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrightnessVolumeSlider {
        namespace {
            inline app::BrightnessVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::BrightnessVolumeSlider__Class** type_info = &type_info_ref;
        inline app::BrightnessVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::BrightnessVolumeSlider__Class>(type_info, "", "BrightnessVolumeSlider");
        }
        inline app::BrightnessVolumeSlider* create() {
            return il2cpp::create_object<app::BrightnessVolumeSlider>(get_class());
        }
    } // namespace BrightnessVolumeSlider
} // namespace app::classes::types
