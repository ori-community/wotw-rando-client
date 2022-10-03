#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberBrightnessContrastAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberBrightnessContrastAnimator__Class** type_info;
        inline app::UberBrightnessContrastAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberBrightnessContrastAnimator__Class>(type_info, "", "UberBrightnessContrastAnimator");
        }
        inline app::UberBrightnessContrastAnimator* create() {
            return il2cpp::create_object<app::UberBrightnessContrastAnimator>(get_class());
        }
        inline app::UberBrightnessContrastAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::UberBrightnessContrastAnimator__Array>(get_class(), size);
        }
    } // namespace UberBrightnessContrastAnimator
} // namespace app::classes::types
