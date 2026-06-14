#pragma once
#include <Modloader/app/structs/VibrationSlider.h>
#include <Modloader/app/structs/VibrationSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VibrationSlider {
        inline app::VibrationSlider__Class** type_info() {
            static app::VibrationSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VibrationSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VibrationSlider__Class* get_class() {
            return il2cpp::get_class<app::VibrationSlider__Class>(type_info(), "", "VibrationSlider");
        }
        inline app::VibrationSlider* create() {
            return il2cpp::create_object<app::VibrationSlider>(get_class());
        }
    } // namespace VibrationSlider
} // namespace app::classes::types
