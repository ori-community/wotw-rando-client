#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateMachineBehaviourProxy_c__Class** type_info;
        inline app::StateMachineBehaviourProxy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachineBehaviourProxy_c__Class>(type_info, "", "StateMachineBehaviourProxy", "<>c");
        }
        inline app::StateMachineBehaviourProxy_c* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxy_c>(get_class());
        }
    } // namespace StateMachineBehaviourProxy_c
} // namespace app::classes::types
