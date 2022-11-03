#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeletonAnimator {
        namespace {
            inline app::SkeletonAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SkeletonAnimator__Class** type_info = &type_info_ref;
        inline app::SkeletonAnimator__Class* get_class() {
            return il2cpp::get_class<app::SkeletonAnimator__Class>(type_info, "", "SkeletonAnimator");
        }
        inline app::SkeletonAnimator* create() {
            return il2cpp::create_object<app::SkeletonAnimator>(get_class());
        }
    } // namespace SkeletonAnimator
} // namespace app::classes::types
