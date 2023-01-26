#pragma once
#include <Modloader/app/structs/JSONNode_NodeType__Enum.h>
#include <Modloader/app/structs/JSONNode_NodeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JSONNode_NodeType__Enum {
        inline app::JSONNode_NodeType__Enum__Class** type_info() {
            static app::JSONNode_NodeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JSONNode_NodeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JSONNode_NodeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JSONNode_NodeType__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "JSONNode", "NodeType");
        }
        inline app::JSONNode_NodeType__Enum* create() {
            return il2cpp::create_object<app::JSONNode_NodeType__Enum>(get_class());
        }
    } // namespace JSONNode_NodeType__Enum
} // namespace app::classes::types
