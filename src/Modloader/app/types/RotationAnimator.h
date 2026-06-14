#pragma once
#include <Modloader/app/structs/RotationAnimator.h>
#include <Modloader/app/structs/RotationAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationAnimator {
        inline app::RotationAnimator__Class** type_info() {
            static app::RotationAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimator__Class>(type_info(), "", "RotationAnimator");
        }
        inline app::RotationAnimator* create() {
            return il2cpp::create_object<app::RotationAnimator>(get_class());
        }
    } // namespace RotationAnimator
} // namespace app::classes::types
