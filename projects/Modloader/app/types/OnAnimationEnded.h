#pragma once
#include <Modloader/app/structs/OnAnimationEnded.h>
#include <Modloader/app/structs/OnAnimationEnded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnAnimationEnded {
        inline app::OnAnimationEnded__Class** type_info() {
            static app::OnAnimationEnded__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnAnimationEnded__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnAnimationEnded__Class* get_class() {
            return il2cpp::get_class<app::OnAnimationEnded__Class>(type_info(), "fsm.triggers", "OnAnimationEnded");
        }
        inline app::OnAnimationEnded* create() {
            return il2cpp::create_object<app::OnAnimationEnded>(get_class());
        }
    } // namespace OnAnimationEnded
} // namespace app::classes::types
