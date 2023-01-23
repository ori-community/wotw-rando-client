#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollLoopState__Class.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollLoopState.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_RollLoopState {
        inline app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class** type_info = (app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class**)(modloader::win::memory::resolve_rva(0x0478CA58));
        inline app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "RollLoopState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollLoopState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_RollLoopState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_RollLoopState
} // namespace app::classes::types
