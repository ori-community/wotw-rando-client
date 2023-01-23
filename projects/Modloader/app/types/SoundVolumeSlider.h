#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundVolumeSlider__Class.h>
#include <Modloader/app/structs/SoundVolumeSlider.h>

namespace app::classes::types {
    namespace SoundVolumeSlider {
        namespace {
            inline app::SoundVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::SoundVolumeSlider__Class** type_info = &type_info_ref;
        inline app::SoundVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeSlider__Class>(type_info, "", "SoundVolumeSlider");
        }
        inline app::SoundVolumeSlider* create() {
            return il2cpp::create_object<app::SoundVolumeSlider>(get_class());
        }
    } // namespace SoundVolumeSlider
} // namespace app::classes::types
