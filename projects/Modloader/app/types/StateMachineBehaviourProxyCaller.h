#pragma once
#include <Modloader/app/structs/StateMachineBehaviourProxyCaller.h>
#include <Modloader/app/structs/StateMachineBehaviourProxyCaller__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxyCaller {
        inline app::StateMachineBehaviourProxyCaller__Class** type_info() {
            static app::StateMachineBehaviourProxyCaller__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMachineBehaviourProxyCaller__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMachineBehaviourProxyCaller__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviourProxyCaller__Class>(type_info(), "", "StateMachineBehaviourProxyCaller");
        }
        inline app::StateMachineBehaviourProxyCaller* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxyCaller>(get_class());
        }
    } // namespace StateMachineBehaviourProxyCaller
} // namespace app::classes::types
