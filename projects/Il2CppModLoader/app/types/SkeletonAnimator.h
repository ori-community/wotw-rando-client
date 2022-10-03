#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeletonAnimator {
        namespace {
            app::SkeletonAnimator__Class* type_info_ref = nullptr;
        }
        app::SkeletonAnimator__Class** type_info = &type_info_ref;
        inline app::SkeletonAnimator__Class* get_class() {
            return il2cpp::get_class<app::SkeletonAnimator__Class>(type_info, "", "SkeletonAnimator");
        }
        inline app::SkeletonAnimator* create() {
            return il2cpp::create_object<app::SkeletonAnimator>(get_class());
        }
    } // namespace SkeletonAnimator
} // namespace app::classes::types
