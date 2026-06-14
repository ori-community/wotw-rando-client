#pragma once
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array {
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class** type_info() {
            static app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array__Class>(type_info(), "System.Xml.Linq", "XHashtable`1[TValue]+XHashtableState[TValue]+Entry[System.Object][]");
        }
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array* create() {
            return il2cpp::create_object<app::XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array>(get_class());
        }
    } // namespace XHashtable_1_TValue_XHashtableState_TValue_Entry_System_Object___Array
} // namespace app::classes::types
