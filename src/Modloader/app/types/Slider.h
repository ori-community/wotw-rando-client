#pragma once
#include <Modloader/app/structs/Slider.h>
#include <Modloader/app/structs/Slider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Slider {
        inline app::Slider__Class** type_info() {
            static app::Slider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Slider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Slider__Class* get_class() {
            return il2cpp::get_class<app::Slider__Class>(type_info(), "UnityEngine.UI", "Slider");
        }
        inline app::Slider* create() {
            return il2cpp::create_object<app::Slider>(get_class());
        }
    } // namespace Slider
} // namespace app::classes::types
