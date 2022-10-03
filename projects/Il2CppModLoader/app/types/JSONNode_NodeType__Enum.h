#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JSONNode_NodeType__Enum {
        namespace {
            app::JSONNode_NodeType__Enum__Class* type_info_ref = nullptr;
        }
        app::JSONNode_NodeType__Enum__Class** type_info = &type_info_ref;
        inline app::JSONNode_NodeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JSONNode_NodeType__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONNode", "NodeType");
        }
        inline app::JSONNode_NodeType__Enum* create() {
            return il2cpp::create_object<app::JSONNode_NodeType__Enum>(get_class());
        }
    } // namespace JSONNode_NodeType__Enum
} // namespace app::classes::types
