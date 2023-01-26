#pragma once
#include <Modloader/app/structs/ScaleAxisTweenAnimator.h>
#include <Modloader/app/structs/ScaleAxisTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAxisTweenAnimator {
        inline app::ScaleAxisTweenAnimator__Class** type_info() {
            static app::ScaleAxisTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAxisTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAxisTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAxisTweenAnimator__Class>(type_info(), "Moon.Timeline", "ScaleAxisTweenAnimator");
        }
        inline app::ScaleAxisTweenAnimator* create() {
            return il2cpp::create_object<app::ScaleAxisTweenAnimator>(get_class());
        }
    } // namespace ScaleAxisTweenAnimator
} // namespace app::classes::types
