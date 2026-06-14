#pragma once
#include <Modloader/app/structs/GlobalBrightnessAnimator.h>
#include <Modloader/app/structs/GlobalBrightnessAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalBrightnessAnimator {
        inline app::GlobalBrightnessAnimator__Class** type_info() {
            static app::GlobalBrightnessAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalBrightnessAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalBrightnessAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlobalBrightnessAnimator__Class>(type_info(), "", "GlobalBrightnessAnimator");
        }
        inline app::GlobalBrightnessAnimator* create() {
            return il2cpp::create_object<app::GlobalBrightnessAnimator>(get_class());
        }
    } // namespace GlobalBrightnessAnimator
} // namespace app::classes::types
