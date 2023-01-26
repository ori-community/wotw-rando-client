#pragma once
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_StartRollState.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_StartRollState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_StartRollState {
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState__Class** type_info() {
            static app::TurtleShellRollAttackBehaviourNew_StartRollState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurtleShellRollAttackBehaviourNew_StartRollState__Class**)(modloader::win::memory::resolve_rva(0x04760A88));
            }
            return cache;
        }
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_StartRollState__Class>(type_info(), "Moon", "TurtleShellRollAttackBehaviourNew", "StartRollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_StartRollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_StartRollState
} // namespace app::classes::types
