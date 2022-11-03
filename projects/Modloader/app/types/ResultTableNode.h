#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResultTableNode {
        namespace {
            inline app::ResultTableNode__Class* type_info_ref = nullptr;
        }
        inline app::ResultTableNode__Class** type_info = &type_info_ref;
        inline app::ResultTableNode__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNode__Class>(type_info, "PlayFab.ServerModels", "ResultTableNode");
        }
        inline app::ResultTableNode* create() {
            return il2cpp::create_object<app::ResultTableNode>(get_class());
        }
        inline app::ResultTableNode__Array* create_array(int size) {
            return il2cpp::array_new<app::ResultTableNode__Array>(get_class(), size);
        }
        inline app::ResultTableNode__Array* create_array(const std::vector<app::ResultTableNode*>& items) {
            return il2cpp::array_new<app::ResultTableNode__Array>(get_class(), items);
        }
    } // namespace ResultTableNode
} // namespace app::classes::types
