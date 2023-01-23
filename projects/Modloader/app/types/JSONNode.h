#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JSONNode__Class.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/JSONNode__Array.h>

namespace app::classes::types {
    namespace JSONNode {
        inline app::JSONNode__Class** type_info = (app::JSONNode__Class**)(modloader::win::memory::resolve_rva(0x047609B0));
        inline app::JSONNode__Class* get_class() {
            return il2cpp::get_class<app::JSONNode__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONNode");
        }
        inline app::JSONNode* create() {
            return il2cpp::create_object<app::JSONNode>(get_class());
        }
        inline app::JSONNode__Array* create_array(int size) {
            return il2cpp::array_new<app::JSONNode__Array>(get_class(), size);
        }
        inline app::JSONNode__Array* create_array(const std::vector<app::JSONNode*>& items) {
            return il2cpp::array_new<app::JSONNode__Array>(get_class(), items);
        }
    } // namespace JSONNode
} // namespace app::classes::types
