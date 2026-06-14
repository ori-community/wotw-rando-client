#pragma once
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_EndRollState.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_EndRollState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_EndRollState {
        inline app::TurtleShellRollAttackBehaviourNew_EndRollState__Class** type_info() {
            static app::TurtleShellRollAttackBehaviourNew_EndRollState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurtleShellRollAttackBehaviourNew_EndRollState__Class**)(modloader::win::memory::resolve_rva(0x04733910));
            }
            return cache;
        }
        inline app::TurtleShellRollAttackBehaviourNew_EndRollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_EndRollState__Class>(type_info(), "Moon", "TurtleShellRollAttackBehaviourNew", "EndRollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_EndRollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_EndRollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_EndRollState
} // namespace app::classes::types
