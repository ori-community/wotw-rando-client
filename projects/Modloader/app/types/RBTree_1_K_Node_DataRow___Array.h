#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RBTree_1_K_Node_DataRow___Array {
        namespace {
            inline app::RBTree_1_K_Node_DataRow___Array__Class* type_info_ref = nullptr;
        }
        inline app::RBTree_1_K_Node_DataRow___Array__Class** type_info = &type_info_ref;
        inline app::RBTree_1_K_Node_DataRow___Array__Class* get_class() {
            return il2cpp::get_class<app::RBTree_1_K_Node_DataRow___Array__Class>(type_info, "System.Data", "RBTree`1[K]+Node[DataRow][]");
        }
        inline app::RBTree_1_K_Node_DataRow___Array* create() {
            return il2cpp::create_object<app::RBTree_1_K_Node_DataRow___Array>(get_class());
        }
    } // namespace RBTree_1_K_Node_DataRow___Array
} // namespace app::classes::types
