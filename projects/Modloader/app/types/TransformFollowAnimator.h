#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformFollowAnimator__Class.h>
#include <Modloader/app/structs/TransformFollowAnimator.h>

namespace app::classes::types {
    namespace TransformFollowAnimator {
        namespace {
            inline app::TransformFollowAnimator__Class* type_info_ref = nullptr;
        }
        inline app::TransformFollowAnimator__Class** type_info = &type_info_ref;
        inline app::TransformFollowAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransformFollowAnimator__Class>(type_info, "Moon.Timeline", "TransformFollowAnimator");
        }
        inline app::TransformFollowAnimator* create() {
            return il2cpp::create_object<app::TransformFollowAnimator>(get_class());
        }
    } // namespace TransformFollowAnimator
} // namespace app::classes::types
