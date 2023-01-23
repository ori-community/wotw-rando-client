#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array.h>

namespace app::classes::types {
    namespace ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array {
        namespace {
            inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class* type_info_ref = nullptr;
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class>(type_info, "System.Collections.Concurrent", "ConcurrentDictionary`2[TKey,TValue]+Node[System.String,System.Object][]");
        }
        inline app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array* create() {
            return il2cpp::create_object<app::ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array>(get_class());
        }
    } // namespace ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array
} // namespace app::classes::types
