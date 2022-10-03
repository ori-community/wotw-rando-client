#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicVolumeSlider {
        namespace {
            app::MusicVolumeSlider__Class* type_info_ref = nullptr;
        }
        app::MusicVolumeSlider__Class** type_info = &type_info_ref;
        inline app::MusicVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeSlider__Class>(type_info, "", "MusicVolumeSlider");
        }
        inline app::MusicVolumeSlider* create() {
            return il2cpp::create_object<app::MusicVolumeSlider>(get_class());
        }
    } // namespace MusicVolumeSlider
} // namespace app::classes::types
