#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AstNode_AstType__Enum {
        namespace {
            app::AstNode_AstType__Enum__Class* type_info_ref = nullptr;
        }
        app::AstNode_AstType__Enum__Class** type_info = &type_info_ref;
        inline app::AstNode_AstType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AstNode_AstType__Enum__Class>(type_info, "MS.Internal.Xml.XPath", "AstNode", "AstType");
        }
        inline app::AstNode_AstType__Enum* create() {
            return il2cpp::create_object<app::AstNode_AstType__Enum>(get_class());
        }
    } // namespace AstNode_AstType__Enum
} // namespace app::classes::types
