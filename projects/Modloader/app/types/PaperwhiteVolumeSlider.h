#pragma once
#include <Modloader/app/structs/PaperwhiteVolumeSlider.h>
#include <Modloader/app/structs/PaperwhiteVolumeSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PaperwhiteVolumeSlider {
        inline app::PaperwhiteVolumeSlider__Class** type_info() {
            static app::PaperwhiteVolumeSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PaperwhiteVolumeSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PaperwhiteVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::PaperwhiteVolumeSlider__Class>(type_info(), "", "PaperwhiteVolumeSlider");
        }
        inline app::PaperwhiteVolumeSlider* create() {
            return il2cpp::create_object<app::PaperwhiteVolumeSlider>(get_class());
        }
    } // namespace PaperwhiteVolumeSlider
} // namespace app::classes::types
