#pragma once
#include <Modloader/app/structs/ConcurrentDictionary_2_TK_TVal_No_Syst_Obje_Syst_Runt_Serializat_DataMemberAttrib___Ar__Cl.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TK_TVal_No_Syst_Obje_Syst_Runti_Serializati_DataMemberAttribu___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array {
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array__Class** type_info() {
            static app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array__Class* get_class() {
            return il2cpp::get_class<app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array__Class>(type_info(), "System.Collections.Concurrent", "ConcurrentDictionary`2[TKey,TValue]+Node[System.Object,System.Runtime.Serialization.DataMemberAttribute][]");
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array* create() {
            return il2cpp::create_object<app::ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array>(get_class());
        }
    } // namespace ConcurrentDictionary_2_TKey_TValue_Node_System_Object_System_Runtime_Serialization_DataMemberAttribute___Array
} // namespace app::classes::types
