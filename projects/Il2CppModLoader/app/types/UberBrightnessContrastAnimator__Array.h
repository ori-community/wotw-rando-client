#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberBrightnessContrastAnimator__Array {
        namespace {
            app::UberBrightnessContrastAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::UberBrightnessContrastAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberBrightnessContrastAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberBrightnessContrastAnimator__Array__Class>(type_info, "", "UberBrightnessContrastAnimator[]");
        }
        inline app::UberBrightnessContrastAnimator__Array* create() {
            return il2cpp::create_object<app::UberBrightnessContrastAnimator__Array>(get_class());
        }
    } // namespace UberBrightnessContrastAnimator__Array
} // namespace app::classes::types
