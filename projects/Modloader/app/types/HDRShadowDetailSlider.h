#pragma once
#include <Modloader/app/structs/HDRShadowDetailSlider.h>
#include <Modloader/app/structs/HDRShadowDetailSlider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HDRShadowDetailSlider {
        inline app::HDRShadowDetailSlider__Class** type_info() {
            static app::HDRShadowDetailSlider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HDRShadowDetailSlider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HDRShadowDetailSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRShadowDetailSlider__Class>(type_info(), "", "HDRShadowDetailSlider");
        }
        inline app::HDRShadowDetailSlider* create() {
            return il2cpp::create_object<app::HDRShadowDetailSlider>(get_class());
        }
    } // namespace HDRShadowDetailSlider
} // namespace app::classes::types
