#pragma once
#include <Modloader/app/structs/UberPostContrastAndBrightnessAnimator__Array.h>
#include <Modloader/app/structs/UberPostContrastAndBrightnessAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostContrastAndBrightnessAnimator__Array {
        inline app::UberPostContrastAndBrightnessAnimator__Array__Class** type_info() {
            static app::UberPostContrastAndBrightnessAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostContrastAndBrightnessAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPostContrastAndBrightnessAnimator__Array__Class>(type_info(), "", "UberPostContrastAndBrightnessAnimator[]");
        }
        inline app::UberPostContrastAndBrightnessAnimator__Array* create() {
            return il2cpp::create_object<app::UberPostContrastAndBrightnessAnimator__Array>(get_class());
        }
    } // namespace UberPostContrastAndBrightnessAnimator__Array
} // namespace app::classes::types
