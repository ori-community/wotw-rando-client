#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InverterNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InverterNode__Class** type_info;
        inline app::InverterNode__Class* get_class() {
            return il2cpp::get_class<app::InverterNode__Class>(type_info, "UberBehaviourTree", "InverterNode");
        }
        inline app::InverterNode* create() {
            return il2cpp::create_object<app::InverterNode>(get_class());
        }
    } // namespace InverterNode
} // namespace app::classes::types
