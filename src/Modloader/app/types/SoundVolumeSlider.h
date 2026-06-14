#pragma once
#include <Modloader/app/structs/SoundVolumeSlider.h>
#include <Modloader/app/structs/SoundVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundVolumeSlider {
        inline app::SoundVolumeSlider__Class** type_info() {
            static app::SoundVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeSlider__Class>(type_info(), "", "SoundVolumeSlider");
        }
        inline app::SoundVolumeSlider* create() {
            return il2cpp::create_object<app::SoundVolumeSlider>(get_class());
        }
    } // namespace SoundVolumeSlider
} // namespace app::classes::types
