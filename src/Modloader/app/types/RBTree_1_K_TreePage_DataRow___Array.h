#pragma once
#include <Modloader/app/structs/RBTree_1_K_TreePage_DataRow___Array.h>
#include <Modloader/app/structs/RBTree_1_K_TreePage_DataRow___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RBTree_1_K_TreePage_DataRow___Array {
        inline app::RBTree_1_K_TreePage_DataRow___Array__Class** type_info() {
            static app::RBTree_1_K_TreePage_DataRow___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RBTree_1_K_TreePage_DataRow___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RBTree_1_K_TreePage_DataRow___Array__Class* get_class() {
            return il2cpp::get_class<app::RBTree_1_K_TreePage_DataRow___Array__Class>(type_info(), "System.Data", "RBTree`1[K]+TreePage[DataRow][]");
        }
        inline app::RBTree_1_K_TreePage_DataRow___Array* create() {
            return il2cpp::create_object<app::RBTree_1_K_TreePage_DataRow___Array>(get_class());
        }
    } // namespace RBTree_1_K_TreePage_DataRow___Array
} // namespace app::classes::types
