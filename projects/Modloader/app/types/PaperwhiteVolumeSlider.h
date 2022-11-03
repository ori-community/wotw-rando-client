#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PaperwhiteVolumeSlider {
        namespace {
            inline app::PaperwhiteVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::PaperwhiteVolumeSlider__Class** type_info = &type_info_ref;
        inline app::PaperwhiteVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::PaperwhiteVolumeSlider__Class>(type_info, "", "PaperwhiteVolumeSlider");
        }
        inline app::PaperwhiteVolumeSlider* create() {
            return il2cpp::create_object<app::PaperwhiteVolumeSlider>(get_class());
        }
    } // namespace PaperwhiteVolumeSlider
} // namespace app::classes::types
