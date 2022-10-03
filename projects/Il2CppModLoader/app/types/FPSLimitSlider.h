#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSLimitSlider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSLimitSlider__Class** type_info;
        inline app::FPSLimitSlider__Class* get_class() {
            return il2cpp::get_class<app::FPSLimitSlider__Class>(type_info, "", "FPSLimitSlider");
        }
        inline app::FPSLimitSlider* create() {
            return il2cpp::create_object<app::FPSLimitSlider>(get_class());
        }
    } // namespace FPSLimitSlider
} // namespace app::classes::types
