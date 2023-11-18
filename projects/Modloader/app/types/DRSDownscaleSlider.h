#pragma once
#include <Modloader/app/structs/DRSDownscaleSlider.h>
#include <Modloader/app/structs/DRSDownscaleSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DRSDownscaleSlider {
        inline app::DRSDownscaleSlider__Class** type_info() {
            static app::DRSDownscaleSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DRSDownscaleSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DRSDownscaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DRSDownscaleSlider__Class>(type_info(), "", "DRSDownscaleSlider");
        }
        inline app::DRSDownscaleSlider* create() {
            return il2cpp::create_object<app::DRSDownscaleSlider>(get_class());
        }
    } // namespace DRSDownscaleSlider
} // namespace app::classes::types
