#pragma once
#include <Modloader/app/structs/SaturationSlider.h>
#include <Modloader/app/structs/SaturationSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaturationSlider {
        inline app::SaturationSlider__Class** type_info() {
            static app::SaturationSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaturationSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaturationSlider__Class* get_class() {
            return il2cpp::get_class<app::SaturationSlider__Class>(type_info(), "", "SaturationSlider");
        }
        inline app::SaturationSlider* create() {
            return il2cpp::create_object<app::SaturationSlider>(get_class());
        }
    } // namespace SaturationSlider
} // namespace app::classes::types
