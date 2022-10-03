#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisplayScaleSlider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DisplayScaleSlider__Class** type_info;
        inline app::DisplayScaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DisplayScaleSlider__Class>(type_info, "", "DisplayScaleSlider");
        }
        inline app::DisplayScaleSlider* create() {
            return il2cpp::create_object<app::DisplayScaleSlider>(get_class());
        }
    } // namespace DisplayScaleSlider
} // namespace app::classes::types
