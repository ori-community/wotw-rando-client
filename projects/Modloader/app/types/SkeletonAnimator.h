#pragma once
#include <Modloader/app/structs/SkeletonAnimator.h>
#include <Modloader/app/structs/SkeletonAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeletonAnimator {
        inline app::SkeletonAnimator__Class** type_info() {
            static app::SkeletonAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeletonAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeletonAnimator__Class* get_class() {
            return il2cpp::get_class<app::SkeletonAnimator__Class>(type_info(), "", "SkeletonAnimator");
        }
        inline app::SkeletonAnimator* create() {
            return il2cpp::create_object<app::SkeletonAnimator>(get_class());
        }
    } // namespace SkeletonAnimator
} // namespace app::classes::types
