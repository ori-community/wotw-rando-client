#pragma once
#include <Modloader/app/structs/TurtleDodgeRollBackBehaviourNew.h>
#include <Modloader/app/structs/TurtleDodgeRollBackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleDodgeRollBackBehaviourNew {
        inline app::TurtleDodgeRollBackBehaviourNew__Class** type_info() {
            static app::TurtleDodgeRollBackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleDodgeRollBackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleDodgeRollBackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleDodgeRollBackBehaviourNew__Class>(type_info(), "Moon", "TurtleDodgeRollBackBehaviourNew");
        }
        inline app::TurtleDodgeRollBackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleDodgeRollBackBehaviourNew>(get_class());
        }
    } // namespace TurtleDodgeRollBackBehaviourNew
} // namespace app::classes::types
