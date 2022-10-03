#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Slider_Axis__Enum {
        namespace {
            app::Slider_Axis__Enum__Class* type_info_ref = nullptr;
        }
        app::Slider_Axis__Enum__Class** type_info = &type_info_ref;
        inline app::Slider_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Slider_Axis__Enum__Class>(type_info, "UnityEngine.UI", "Slider", "Axis");
        }
        inline app::Slider_Axis__Enum* create() {
            return il2cpp::create_object<app::Slider_Axis__Enum>(get_class());
        }
    } // namespace Slider_Axis__Enum
} // namespace app::classes::types
