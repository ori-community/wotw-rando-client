#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INpcInteractionNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INpcInteractionNode__Class** type_info;
        inline app::INpcInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::INpcInteractionNode__Class>(type_info, "", "INpcInteractionNode");
        }
        inline app::INpcInteractionNode* create() {
            return il2cpp::create_object<app::INpcInteractionNode>(get_class());
        }
    } // namespace INpcInteractionNode
} // namespace app::classes::types
