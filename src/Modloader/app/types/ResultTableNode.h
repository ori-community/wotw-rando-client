#pragma once
#include <Modloader/app/structs/ResultTableNode.h>
#include <Modloader/app/structs/ResultTableNode__Array.h>
#include <Modloader/app/structs/ResultTableNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResultTableNode {
        inline app::ResultTableNode__Class** type_info() {
            static app::ResultTableNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResultTableNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResultTableNode__Class* get_class() {
            return il2cpp::get_class<app::ResultTableNode__Class>(type_info(), "PlayFab.ServerModels", "ResultTableNode");
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
