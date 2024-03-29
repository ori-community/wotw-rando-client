#pragma once
#include <Modloader/app/structs/TurtleDodgeJumpForwardBehaviourNew.h>
#include <Modloader/app/structs/TurtleDodgeJumpForwardBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleDodgeJumpForwardBehaviourNew {
        inline app::TurtleDodgeJumpForwardBehaviourNew__Class** type_info() {
            static app::TurtleDodgeJumpForwardBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleDodgeJumpForwardBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleDodgeJumpForwardBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleDodgeJumpForwardBehaviourNew__Class>(type_info(), "Moon", "TurtleDodgeJumpForwardBehaviourNew");
        }
        inline app::TurtleDodgeJumpForwardBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleDodgeJumpForwardBehaviourNew>(get_class());
        }
    } // namespace TurtleDodgeJumpForwardBehaviourNew
} // namespace app::classes::types
