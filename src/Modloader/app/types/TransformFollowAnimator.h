#pragma once
#include <Modloader/app/structs/TransformFollowAnimator.h>
#include <Modloader/app/structs/TransformFollowAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformFollowAnimator {
        inline app::TransformFollowAnimator__Class** type_info() {
            static app::TransformFollowAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformFollowAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformFollowAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransformFollowAnimator__Class>(type_info(), "Moon.Timeline", "TransformFollowAnimator");
        }
        inline app::TransformFollowAnimator* create() {
            return il2cpp::create_object<app::TransformFollowAnimator>(get_class());
        }
    } // namespace TransformFollowAnimator
} // namespace app::classes::types
