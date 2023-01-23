#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array__Class.h>
#include <Modloader/app/structs/XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array.h>

namespace app::classes::types {
    namespace XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array {
        namespace {
            inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array__Class* type_info_ref = nullptr;
        }
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array__Class** type_info = &type_info_ref;
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array__Class* get_class() {
            return il2cpp::get_class<app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array__Class>(type_info, "System.Xml.Linq", "XHashtable`1[TValue]+XHashtableState[TValue]+Entry[XName][]");
        }
        inline app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array* create() {
            return il2cpp::create_object<app::XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array>(get_class());
        }
    } // namespace XHashtable_1_TValue_XHashtableState_TValue_Entry_XName___Array
} // namespace app::classes::types
