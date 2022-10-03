#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourStates__Class** type_info;
        inline app::BehaviourStates__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStates__Class>(type_info, "UberBehaviourTree", "BehaviourStates");
        }
        inline app::BehaviourStates* create() {
            return il2cpp::create_object<app::BehaviourStates>(get_class());
        }
    } // namespace BehaviourStates
} // namespace app::classes::types
