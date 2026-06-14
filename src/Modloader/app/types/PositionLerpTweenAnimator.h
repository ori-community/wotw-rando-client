#pragma once
#include <Modloader/app/structs/PositionLerpTweenAnimator.h>
#include <Modloader/app/structs/PositionLerpTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionLerpTweenAnimator {
        inline app::PositionLerpTweenAnimator__Class** type_info() {
            static app::PositionLerpTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionLerpTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionLerpTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionLerpTweenAnimator__Class>(type_info(), "Moon", "PositionLerpTweenAnimator");
        }
        inline app::PositionLerpTweenAnimator* create() {
            return il2cpp::create_object<app::PositionLerpTweenAnimator>(get_class());
        }
    } // namespace PositionLerpTweenAnimator
} // namespace app::classes::types
