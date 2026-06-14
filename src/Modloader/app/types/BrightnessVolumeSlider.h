#pragma once
#include <Modloader/app/structs/BrightnessVolumeSlider.h>
#include <Modloader/app/structs/BrightnessVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrightnessVolumeSlider {
        inline app::BrightnessVolumeSlider__Class** type_info() {
            static app::BrightnessVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrightnessVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrightnessVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::BrightnessVolumeSlider__Class>(type_info(), "", "BrightnessVolumeSlider");
        }
        inline app::BrightnessVolumeSlider* create() {
            return il2cpp::create_object<app::BrightnessVolumeSlider>(get_class());
        }
    } // namespace BrightnessVolumeSlider
} // namespace app::classes::types
