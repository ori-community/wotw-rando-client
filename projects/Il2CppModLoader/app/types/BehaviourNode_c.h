#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourNode_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourNode_c__Class** type_info;
        inline app::BehaviourNode_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourNode_c__Class>(type_info, "Moon.BehaviourSystem", "BehaviourNode", "<>c");
        }
        inline app::BehaviourNode_c* create() {
            return il2cpp::create_object<app::BehaviourNode_c>(get_class());
        }
    } // namespace BehaviourNode_c
} // namespace app::classes::types
