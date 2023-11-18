#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syst_Int_Dictiona_2_Syst_Int_Syst_Reflecti_MemberIn___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_Int3_Dictionar_2_Syste_Int3_Syst_Reflecti_MemberIn___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Int32,Dictionary`2[System.Int32,System.Reflection.MemberInfo]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array
} // namespace app::classes::types
