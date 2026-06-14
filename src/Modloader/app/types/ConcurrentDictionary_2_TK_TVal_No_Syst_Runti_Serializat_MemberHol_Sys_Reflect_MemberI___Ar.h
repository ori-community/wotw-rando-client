#pragma once
#include <Modloader/app/structs/ConcurrentDictionary_2_TK_TVa_N_Sys_Runt_Serializat_MemberHol_Sys_Reflect_MemberI___Ar__Cl.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TK_TVal_No_Syst_Runti_Serializat_MemberHol_Sys_Reflect_MemberI___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array {
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array__Class** type_info() {
            static app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array__Class>(type_info(), "System.Collections.Concurrent", "ConcurrentDictionary`2[TKey,TValue]+Node[System.Runtime.Serialization.MemberHolder,System.Reflection.MemberInfo[]][]");
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array* create() {
            return il2cpp::create_object<app::ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array>(get_class());
        }
    } // namespace ConcurrentDictionary_2_TKey_TValue_Node_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo___Array
} // namespace app::classes::types
