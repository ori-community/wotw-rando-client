#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourNode__Class** type_info;
        inline app::BehaviourNode__Class* get_class() {
            return il2cpp::get_class<app::BehaviourNode__Class>(type_info, "Moon.BehaviourSystem", "BehaviourNode");
        }
        inline app::BehaviourNode* create() {
            return il2cpp::create_object<app::BehaviourNode>(get_class());
        }
        inline app::BehaviourNode__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourNode__Array>(get_class(), size);
        }
        inline app::BehaviourNode__Array* create_array(const std::vector<app::BehaviourNode*>& items) {
            return il2cpp::array_new<app::BehaviourNode__Array>(get_class(), items);
        }
    } // namespace BehaviourNode
} // namespace app::classes::types
