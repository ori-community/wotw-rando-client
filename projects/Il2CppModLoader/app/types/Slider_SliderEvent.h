#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Slider_SliderEvent {
        inline app::Slider_SliderEvent__Class** type_info = (app::Slider_SliderEvent__Class**)(modloader::win::memory::resolve_rva(0x0478EFC0));
        inline app::Slider_SliderEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Slider_SliderEvent__Class>(type_info, "UnityEngine.UI", "Slider", "SliderEvent");
        }
        inline app::Slider_SliderEvent* create() {
            return il2cpp::create_object<app::Slider_SliderEvent>(get_class());
        }
    } // namespace Slider_SliderEvent
} // namespace app::classes::types
