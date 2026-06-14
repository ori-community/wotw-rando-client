#pragma once
#include <Modloader/app/structs/Slider_SliderEvent.h>
#include <Modloader/app/structs/Slider_SliderEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Slider_SliderEvent {
        inline app::Slider_SliderEvent__Class** type_info() {
            static app::Slider_SliderEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Slider_SliderEvent__Class**)(modloader::win::memory::resolve_rva(0x0478EFC0));
            }
            return cache;
        }
        inline app::Slider_SliderEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Slider_SliderEvent__Class>(type_info(), "UnityEngine.UI", "Slider", "SliderEvent");
        }
        inline app::Slider_SliderEvent* create() {
            return il2cpp::create_object<app::Slider_SliderEvent>(get_class());
        }
    } // namespace Slider_SliderEvent
} // namespace app::classes::types
