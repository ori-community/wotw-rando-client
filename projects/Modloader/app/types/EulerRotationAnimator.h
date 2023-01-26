#pragma once
#include <Modloader/app/structs/EulerRotationAnimator.h>
#include <Modloader/app/structs/EulerRotationAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EulerRotationAnimator {
        inline app::EulerRotationAnimator__Class** type_info() {
            static app::EulerRotationAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EulerRotationAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EulerRotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerRotationAnimator__Class>(type_info(), "", "EulerRotationAnimator");
        }
        inline app::EulerRotationAnimator* create() {
            return il2cpp::create_object<app::EulerRotationAnimator>(get_class());
        }
    } // namespace EulerRotationAnimator
} // namespace app::classes::types
