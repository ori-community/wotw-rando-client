#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourState__Class** type_info;
        inline app::BehaviourState__Class* get_class() {
            return il2cpp::get_class<app::BehaviourState__Class>(type_info, "UberBehaviourTree", "BehaviourState");
        }
        inline app::BehaviourState* create() {
            return il2cpp::create_object<app::BehaviourState>(get_class());
        }
    } // namespace BehaviourState
} // namespace app::classes::types
