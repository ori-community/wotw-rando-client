#pragma once
#include <Modloader/app/structs/DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array {
        inline app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class** type_info() {
            static app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array__Class>(type_info(), "", "DictionaryList`2[Key,Value]+KeyValuePair[System.Object,System.Object][]");
        }
        inline app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array* create() {
            return il2cpp::create_object<app::DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array>(get_class());
        }
    } // namespace DictionaryList_2_Key_Value_KeyValuePair_System_Object_System_Object___Array
} // namespace app::classes::types
