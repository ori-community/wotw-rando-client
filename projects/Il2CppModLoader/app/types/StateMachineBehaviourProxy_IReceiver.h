#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy_IReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachineBehaviourProxy_IReceiver__Class** type_info;
        inline app::StateMachineBehaviourProxy_IReceiver__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachineBehaviourProxy_IReceiver__Class>(type_info, "", "StateMachineBehaviourProxy", "IReceiver");
        }
        inline app::StateMachineBehaviourProxy_IReceiver* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxy_IReceiver>(get_class());
        }
    } // namespace StateMachineBehaviourProxy_IReceiver
} // namespace app::classes::types
