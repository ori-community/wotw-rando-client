#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Syste_Typ_Lis_1_FullSerialize_fsObjectProcesso___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Type,List`1[FullSerializer.fsObjectProcessor]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Type_List_1_FullSerializer_fsObjectProcessor___Array
} // namespace app::classes::types
