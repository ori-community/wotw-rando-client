#pragma once
#include <Modloader/app/structs/SharpnessVolumeSlider.h>
#include <Modloader/app/structs/SharpnessVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharpnessVolumeSlider {
        inline app::SharpnessVolumeSlider__Class** type_info() {
            static app::SharpnessVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SharpnessVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SharpnessVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::SharpnessVolumeSlider__Class>(type_info(), "", "SharpnessVolumeSlider");
        }
        inline app::SharpnessVolumeSlider* create() {
            return il2cpp::create_object<app::SharpnessVolumeSlider>(get_class());
        }
    } // namespace SharpnessVolumeSlider
} // namespace app::classes::types
