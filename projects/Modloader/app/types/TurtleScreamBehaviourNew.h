#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleScreamBehaviourNew {
        namespace {
            inline app::TurtleScreamBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleScreamBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleScreamBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleScreamBehaviourNew__Class>(type_info, "", "TurtleScreamBehaviourNew");
        }
        inline app::TurtleScreamBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleScreamBehaviourNew>(get_class());
        }
    } // namespace TurtleScreamBehaviourNew
} // namespace app::classes::types
