#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_Ty_Dictiona_2_Syst_Stri_Syst_Reflecti_FieldIn___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_Typ_Dictionar_2_Syste_Strin_Syste_Reflecti_FieldIn___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Type,Dictionary`2[System.String,System.Reflection.FieldInfo]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array
} // namespace app::classes::types
