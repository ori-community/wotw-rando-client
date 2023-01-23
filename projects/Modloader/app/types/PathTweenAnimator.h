#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PathTweenAnimator__Class.h>
#include <Modloader/app/structs/PathTweenAnimator.h>

namespace app::classes::types {
    namespace PathTweenAnimator {
        namespace {
            inline app::PathTweenAnimator__Class* type_info_ref = nullptr;
        }
        inline app::PathTweenAnimator__Class** type_info = &type_info_ref;
        inline app::PathTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PathTweenAnimator__Class>(type_info, "Moon.Timeline", "PathTweenAnimator");
        }
        inline app::PathTweenAnimator* create() {
            return il2cpp::create_object<app::PathTweenAnimator>(get_class());
        }
    } // namespace PathTweenAnimator
} // namespace app::classes::types
