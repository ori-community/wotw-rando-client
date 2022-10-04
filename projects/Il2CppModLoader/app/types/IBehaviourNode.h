#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBehaviourNode__Class** type_info;
        inline app::IBehaviourNode__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourNode__Class>(type_info, "Moon.BehaviourSystem", "IBehaviourNode");
        }
        inline app::IBehaviourNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourNode__Array>(get_class(), size);
        }
    } // namespace IBehaviourNode
} // namespace app::classes::types
