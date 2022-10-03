#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SyntaxTreeNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SyntaxTreeNode__Class** type_info;
        inline app::SyntaxTreeNode__Class* get_class() {
            return il2cpp::get_class<app::SyntaxTreeNode__Class>(type_info, "System.Xml.Schema", "SyntaxTreeNode");
        }
        inline app::SyntaxTreeNode* create() {
            return il2cpp::create_object<app::SyntaxTreeNode>(get_class());
        }
    } // namespace SyntaxTreeNode
} // namespace app::classes::types
