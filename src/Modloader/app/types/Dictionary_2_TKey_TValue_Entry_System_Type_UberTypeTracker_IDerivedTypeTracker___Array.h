#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracke___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Type,UberTypeTracker+IDerivedTypeTracker][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Type_UberTypeTracker_IDerivedTypeTracker___Array
} // namespace app::classes::types
