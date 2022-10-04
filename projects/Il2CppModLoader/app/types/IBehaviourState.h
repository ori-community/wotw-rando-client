#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBehaviourState__Class** type_info;
        inline app::IBehaviourState__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourState__Class>(type_info, "UberBehaviourTree", "IBehaviourState");
        }
    } // namespace IBehaviourState
} // namespace app::classes::types
