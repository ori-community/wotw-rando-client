#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PaperwhiteVolumeSlider {
        namespace {
            app::PaperwhiteVolumeSlider__Class* type_info_ref = nullptr;
        }
        app::PaperwhiteVolumeSlider__Class** type_info = &type_info_ref;
        inline app::PaperwhiteVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::PaperwhiteVolumeSlider__Class>(type_info, "", "PaperwhiteVolumeSlider");
        }
        inline app::PaperwhiteVolumeSlider* create() {
            return il2cpp::create_object<app::PaperwhiteVolumeSlider>(get_class());
        }
    } // namespace PaperwhiteVolumeSlider
} // namespace app::classes::types
