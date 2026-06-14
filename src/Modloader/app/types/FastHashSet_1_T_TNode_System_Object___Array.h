#pragma once
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_Object___Array.h>
#include <Modloader/app/structs/FastHashSet_1_T_TNode_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastHashSet_1_T_TNode_System_Object___Array {
        inline app::FastHashSet_1_T_TNode_System_Object___Array__Class** type_info() {
            static app::FastHashSet_1_T_TNode_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FastHashSet_1_T_TNode_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FastHashSet_1_T_TNode_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::FastHashSet_1_T_TNode_System_Object___Array__Class>(type_info(), "Motvin.Collections", "FastHashSet`1[T]+TNode[System.Object][]");
        }
        inline app::FastHashSet_1_T_TNode_System_Object___Array* create() {
            return il2cpp::create_object<app::FastHashSet_1_T_TNode_System_Object___Array>(get_class());
        }
    } // namespace FastHashSet_1_T_TNode_System_Object___Array
} // namespace app::classes::types
