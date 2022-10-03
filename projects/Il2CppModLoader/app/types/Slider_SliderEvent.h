#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Slider_SliderEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Slider_SliderEvent__Class** type_info;
        inline app::Slider_SliderEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Slider_SliderEvent__Class>(type_info, "UnityEngine.UI", "Slider", "SliderEvent");
        }
        inline app::Slider_SliderEvent* create() {
            return il2cpp::create_object<app::Slider_SliderEvent>(get_class());
        }
    } // namespace Slider_SliderEvent
} // namespace app::classes::types
