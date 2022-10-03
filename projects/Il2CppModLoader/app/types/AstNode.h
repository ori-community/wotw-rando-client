#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AstNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AstNode__Class** type_info;
        inline app::AstNode__Class* get_class() {
            return il2cpp::get_class<app::AstNode__Class>(type_info, "MS.Internal.Xml.XPath", "AstNode");
        }
        inline app::AstNode* create() {
            return il2cpp::create_object<app::AstNode>(get_class());
        }
    } // namespace AstNode
} // namespace app::classes::types
