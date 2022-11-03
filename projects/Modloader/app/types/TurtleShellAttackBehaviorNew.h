#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellAttackBehaviorNew {
        namespace {
            inline app::TurtleShellAttackBehaviorNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShellAttackBehaviorNew__Class** type_info = &type_info_ref;
        inline app::TurtleShellAttackBehaviorNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellAttackBehaviorNew__Class>(type_info, "Moon", "TurtleShellAttackBehaviorNew");
        }
        inline app::TurtleShellAttackBehaviorNew* create() {
            return il2cpp::create_object<app::TurtleShellAttackBehaviorNew>(get_class());
        }
    } // namespace TurtleShellAttackBehaviorNew
} // namespace app::classes::types
