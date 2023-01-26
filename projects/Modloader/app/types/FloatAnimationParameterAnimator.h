#pragma once
#include <Modloader/app/structs/FloatAnimationParameterAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameterAnimator {
        inline app::FloatAnimationParameterAnimator__Class** type_info() {
            static app::FloatAnimationParameterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatAnimationParameterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameterAnimator__Class>(type_info(), "Moon.Timeline", "FloatAnimationParameterAnimator");
        }
        inline app::FloatAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::FloatAnimationParameterAnimator>(get_class());
        }
    } // namespace FloatAnimationParameterAnimator
} // namespace app::classes::types
