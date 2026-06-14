#pragma once
#include <Modloader/app/structs/ContrastVolumeSlider.h>
#include <Modloader/app/structs/ContrastVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastVolumeSlider {
        inline app::ContrastVolumeSlider__Class** type_info() {
            static app::ContrastVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::ContrastVolumeSlider__Class>(type_info(), "", "ContrastVolumeSlider");
        }
        inline app::ContrastVolumeSlider* create() {
            return il2cpp::create_object<app::ContrastVolumeSlider>(get_class());
        }
    } // namespace ContrastVolumeSlider
} // namespace app::classes::types
