#pragma once
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#include <Modloader/app/structs/AstNode_AstType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AstNode_AstType__Enum {
        inline app::AstNode_AstType__Enum__Class** type_info() {
            static app::AstNode_AstType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AstNode_AstType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AstNode_AstType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AstNode_AstType__Enum__Class>(type_info(), "MS.Internal.Xml.XPath", "AstNode", "AstType");
        }
        inline app::AstNode_AstType__Enum* create() {
            return il2cpp::create_object<app::AstNode_AstType__Enum>(get_class());
        }
    } // namespace AstNode_AstType__Enum
} // namespace app::classes::types
