#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemSequenceNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemSequenceNode__Class** type_info;
        inline app::MemSequenceNode__Class* get_class() {
            return il2cpp::get_class<app::MemSequenceNode__Class>(type_info, "UberBehaviourTree", "MemSequenceNode");
        }
        inline app::MemSequenceNode* create() {
            return il2cpp::create_object<app::MemSequenceNode>(get_class());
        }
    } // namespace MemSequenceNode
} // namespace app::classes::types
