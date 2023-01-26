#pragma once
#include <Modloader/app/structs/PathTweenAnimator.h>
#include <Modloader/app/structs/PathTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathTweenAnimator {
        inline app::PathTweenAnimator__Class** type_info() {
            static app::PathTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PathTweenAnimator__Class>(type_info(), "Moon.Timeline", "PathTweenAnimator");
        }
        inline app::PathTweenAnimator* create() {
            return il2cpp::create_object<app::PathTweenAnimator>(get_class());
        }
    } // namespace PathTweenAnimator
} // namespace app::classes::types
