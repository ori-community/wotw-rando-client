#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequenceNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SequenceNode__Class** type_info;
        inline app::SequenceNode__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode__Class>(type_info, "System.Xml.Schema", "SequenceNode");
        }
        inline app::SequenceNode* create() {
            return il2cpp::create_object<app::SequenceNode>(get_class());
        }
    } // namespace SequenceNode
} // namespace app::classes::types
