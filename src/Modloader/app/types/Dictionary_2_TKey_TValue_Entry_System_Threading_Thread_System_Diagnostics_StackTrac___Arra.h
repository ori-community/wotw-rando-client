#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entr_Syste_Threadin_Threa_Syste_Diagnostic_StackTrac___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrac___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Threading.Thread,System.Diagnostics.StackTrace][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Threading_Thread_System_Diagnostics_StackTrace___Array
} // namespace app::classes::types
