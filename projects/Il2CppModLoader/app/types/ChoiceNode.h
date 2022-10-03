#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChoiceNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChoiceNode__Class** type_info;
        inline app::ChoiceNode__Class* get_class() {
            return il2cpp::get_class<app::ChoiceNode__Class>(type_info, "System.Xml.Schema", "ChoiceNode");
        }
        inline app::ChoiceNode* create() {
            return il2cpp::create_object<app::ChoiceNode>(get_class());
        }
    } // namespace ChoiceNode
} // namespace app::classes::types
