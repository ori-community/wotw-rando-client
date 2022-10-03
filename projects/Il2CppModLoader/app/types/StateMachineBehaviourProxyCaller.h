#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxyCaller {
        namespace {
            app::StateMachineBehaviourProxyCaller__Class* type_info_ref = nullptr;
        }
        app::StateMachineBehaviourProxyCaller__Class** type_info = &type_info_ref;
        inline app::StateMachineBehaviourProxyCaller__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviourProxyCaller__Class>(type_info, "", "StateMachineBehaviourProxyCaller");
        }
        inline app::StateMachineBehaviourProxyCaller* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxyCaller>(get_class());
        }
    } // namespace StateMachineBehaviourProxyCaller
} // namespace app::classes::types
