#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Slider {
        namespace {
            inline app::Slider__Class* type_info_ref = nullptr;
        }
        inline app::Slider__Class** type_info = &type_info_ref;
        inline app::Slider__Class* get_class() {
            return il2cpp::get_class<app::Slider__Class>(type_info, "UnityEngine.UI", "Slider");
        }
        inline app::Slider* create() {
            return il2cpp::create_object<app::Slider>(get_class());
        }
    } // namespace Slider
} // namespace app::classes::types
