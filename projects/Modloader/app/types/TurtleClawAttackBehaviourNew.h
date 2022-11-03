#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleClawAttackBehaviourNew {
        namespace {
            inline app::TurtleClawAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleClawAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleClawAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleClawAttackBehaviourNew__Class>(type_info, "Moon", "TurtleClawAttackBehaviourNew");
        }
        inline app::TurtleClawAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleClawAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleClawAttackBehaviourNew
} // namespace app::classes::types
