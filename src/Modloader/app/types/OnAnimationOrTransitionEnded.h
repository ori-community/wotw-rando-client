#pragma once
#include <Modloader/app/structs/OnAnimationOrTransitionEnded.h>
#include <Modloader/app/structs/OnAnimationOrTransitionEnded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnAnimationOrTransitionEnded {
        inline app::OnAnimationOrTransitionEnded__Class** type_info() {
            static app::OnAnimationOrTransitionEnded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnAnimationOrTransitionEnded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnAnimationOrTransitionEnded__Class* get_class() {
            return il2cpp::get_class<app::OnAnimationOrTransitionEnded__Class>(type_info(), "fsm.triggers", "OnAnimationOrTransitionEnded");
        }
        inline app::OnAnimationOrTransitionEnded* create() {
            return il2cpp::create_object<app::OnAnimationOrTransitionEnded>(get_class());
        }
    } // namespace OnAnimationOrTransitionEnded
} // namespace app::classes::types
