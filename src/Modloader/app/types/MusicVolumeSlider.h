#pragma once
#include <Modloader/app/structs/MusicVolumeSlider.h>
#include <Modloader/app/structs/MusicVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicVolumeSlider {
        inline app::MusicVolumeSlider__Class** type_info() {
            static app::MusicVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeSlider__Class>(type_info(), "", "MusicVolumeSlider");
        }
        inline app::MusicVolumeSlider* create() {
            return il2cpp::create_object<app::MusicVolumeSlider>(get_class());
        }
    } // namespace MusicVolumeSlider
} // namespace app::classes::types
