#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicVolumeSlider {
        namespace {
            inline app::MusicVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::MusicVolumeSlider__Class** type_info = &type_info_ref;
        inline app::MusicVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeSlider__Class>(type_info, "", "MusicVolumeSlider");
        }
        inline app::MusicVolumeSlider* create() {
            return il2cpp::create_object<app::MusicVolumeSlider>(get_class());
        }
    } // namespace MusicVolumeSlider
} // namespace app::classes::types
