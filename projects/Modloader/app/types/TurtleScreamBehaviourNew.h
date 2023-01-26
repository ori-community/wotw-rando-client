#pragma once
#include <Modloader/app/structs/TurtleScreamBehaviourNew.h>
#include <Modloader/app/structs/TurtleScreamBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleScreamBehaviourNew {
        inline app::TurtleScreamBehaviourNew__Class** type_info() {
            static app::TurtleScreamBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleScreamBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleScreamBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleScreamBehaviourNew__Class>(type_info(), "", "TurtleScreamBehaviourNew");
        }
        inline app::TurtleScreamBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleScreamBehaviourNew>(get_class());
        }
    } // namespace TurtleScreamBehaviourNew
} // namespace app::classes::types
