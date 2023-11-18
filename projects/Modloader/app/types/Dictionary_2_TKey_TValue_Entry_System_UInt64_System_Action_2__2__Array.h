#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.UInt64,System.Action`2][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_UInt64_System_Action_2__2__Array
} // namespace app::classes::types
