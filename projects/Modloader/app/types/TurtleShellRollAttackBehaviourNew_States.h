#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_States__Class.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_States.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_States {
        inline app::TurtleShellRollAttackBehaviourNew_States__Class** type_info = (app::TurtleShellRollAttackBehaviourNew_States__Class**)(modloader::win::memory::resolve_rva(0x04715C20));
        inline app::TurtleShellRollAttackBehaviourNew_States__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_States__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "States");
        }
        inline app::TurtleShellRollAttackBehaviourNew_States* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_States>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_States
} // namespace app::classes::types
