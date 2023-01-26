#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entr_Syste_Int3_Moo_ExceptionProcessin_ExceptionEntr___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Int32,Moon.ExceptionProcessing.ExceptionEntry][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_ExceptionProcessing_ExceptionEntry___Array
} // namespace app::classes::types
