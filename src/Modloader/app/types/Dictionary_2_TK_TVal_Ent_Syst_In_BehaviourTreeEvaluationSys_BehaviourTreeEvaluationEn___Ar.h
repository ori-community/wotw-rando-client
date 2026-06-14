#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Syst_In_BehaviourTreeEvaluationSys_BehaviourTreeEvaluationEn___Ar.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_En_Sys_In_BehaviourTreeEvaluationSys_BehaviourTreeEvaluationEn___Ar__Cl.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Int32,BehaviourTreeEvaluationSystem+BehaviourTreeEvaluationEntry][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry___Array
} // namespace app::classes::types
