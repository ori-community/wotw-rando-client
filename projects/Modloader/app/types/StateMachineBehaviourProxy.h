#pragma once
#include <Modloader/app/structs/StateMachineBehaviourProxy.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy {
        inline app::StateMachineBehaviourProxy__Class** type_info() {
            static app::StateMachineBehaviourProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMachineBehaviourProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMachineBehaviourProxy__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviourProxy__Class>(type_info(), "", "StateMachineBehaviourProxy");
        }
        inline app::StateMachineBehaviourProxy* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxy>(get_class());
        }
    } // namespace StateMachineBehaviourProxy
} // namespace app::classes::types
