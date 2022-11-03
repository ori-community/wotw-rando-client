#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnAnimationOrTransitionEnded {
        namespace {
            inline app::OnAnimationOrTransitionEnded__Class* type_info_ref = nullptr;
        }
        inline app::OnAnimationOrTransitionEnded__Class** type_info = &type_info_ref;
        inline app::OnAnimationOrTransitionEnded__Class* get_class() {
            return il2cpp::get_class<app::OnAnimationOrTransitionEnded__Class>(type_info, "fsm.triggers", "OnAnimationOrTransitionEnded");
        }
        inline app::OnAnimationOrTransitionEnded* create() {
            return il2cpp::create_object<app::OnAnimationOrTransitionEnded>(get_class());
        }
    } // namespace OnAnimationOrTransitionEnded
} // namespace app::classes::types
