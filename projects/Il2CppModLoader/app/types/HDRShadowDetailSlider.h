#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HDRShadowDetailSlider {
        namespace {
            app::HDRShadowDetailSlider__Class* type_info_ref = nullptr;
        }
        app::HDRShadowDetailSlider__Class** type_info = &type_info_ref;
        inline app::HDRShadowDetailSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRShadowDetailSlider__Class>(type_info, "", "HDRShadowDetailSlider");
        }
        inline app::HDRShadowDetailSlider* create() {
            return il2cpp::create_object<app::HDRShadowDetailSlider>(get_class());
        }
    } // namespace HDRShadowDetailSlider
} // namespace app::classes::types
