#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Syst_Ty_Li_1_DynamicInstantiationDescript_ReflectionIn___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_Typ_Li_1_DynamicInstantiationDescript_ReflectionIn___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Type,List`1[DynamicInstantiationDescriptor+ReflectionInfo]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo___Array
} // namespace app::classes::types
