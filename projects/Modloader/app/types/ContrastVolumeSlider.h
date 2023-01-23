#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContrastVolumeSlider__Class.h>
#include <Modloader/app/structs/ContrastVolumeSlider.h>

namespace app::classes::types {
    namespace ContrastVolumeSlider {
        namespace {
            inline app::ContrastVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::ContrastVolumeSlider__Class** type_info = &type_info_ref;
        inline app::ContrastVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::ContrastVolumeSlider__Class>(type_info, "", "ContrastVolumeSlider");
        }
        inline app::ContrastVolumeSlider* create() {
            return il2cpp::create_object<app::ContrastVolumeSlider>(get_class());
        }
    } // namespace ContrastVolumeSlider
} // namespace app::classes::types
