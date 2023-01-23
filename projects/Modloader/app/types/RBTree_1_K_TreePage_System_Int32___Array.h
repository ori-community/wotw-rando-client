#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RBTree_1_K_TreePage_System_Int32___Array__Class.h>
#include <Modloader/app/structs/RBTree_1_K_TreePage_System_Int32___Array.h>

namespace app::classes::types {
    namespace RBTree_1_K_TreePage_System_Int32___Array {
        namespace {
            inline app::RBTree_1_K_TreePage_System_Int32___Array__Class* type_info_ref = nullptr;
        }
        inline app::RBTree_1_K_TreePage_System_Int32___Array__Class** type_info = &type_info_ref;
        inline app::RBTree_1_K_TreePage_System_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::RBTree_1_K_TreePage_System_Int32___Array__Class>(type_info, "System.Data", "RBTree`1[K]+TreePage[System.Int32][]");
        }
        inline app::RBTree_1_K_TreePage_System_Int32___Array* create() {
            return il2cpp::create_object<app::RBTree_1_K_TreePage_System_Int32___Array>(get_class());
        }
    } // namespace RBTree_1_K_TreePage_System_Int32___Array
} // namespace app::classes::types
