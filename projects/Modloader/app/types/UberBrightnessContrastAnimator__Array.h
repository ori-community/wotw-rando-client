#pragma once
#include <Modloader/app/structs/UberBrightnessContrastAnimator__Array.h>
#include <Modloader/app/structs/UberBrightnessContrastAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberBrightnessContrastAnimator__Array {
        inline app::UberBrightnessContrastAnimator__Array__Class** type_info() {
            static app::UberBrightnessContrastAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberBrightnessContrastAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberBrightnessContrastAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberBrightnessContrastAnimator__Array__Class>(type_info(), "", "UberBrightnessContrastAnimator[]");
        }
        inline app::UberBrightnessContrastAnimator__Array* create() {
            return il2cpp::create_object<app::UberBrightnessContrastAnimator__Array>(get_class());
        }
    } // namespace UberBrightnessContrastAnimator__Array
} // namespace app::classes::types
