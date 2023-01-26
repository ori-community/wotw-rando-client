#pragma once
#include <Modloader/app/structs/EulerZRotationTweenAnimator.h>
#include <Modloader/app/structs/EulerZRotationTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EulerZRotationTweenAnimator {
        inline app::EulerZRotationTweenAnimator__Class** type_info() {
            static app::EulerZRotationTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EulerZRotationTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EulerZRotationTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerZRotationTweenAnimator__Class>(type_info(), "Moon.Timeline", "EulerZRotationTweenAnimator");
        }
        inline app::EulerZRotationTweenAnimator* create() {
            return il2cpp::create_object<app::EulerZRotationTweenAnimator>(get_class());
        }
    } // namespace EulerZRotationTweenAnimator
} // namespace app::classes::types
