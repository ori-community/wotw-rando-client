#pragma once
#include <Modloader/app/structs/CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array {
        inline app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class** type_info() {
            static app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array__Class>(type_info(), "System.Dynamic.Utils", "CacheDict`2[TKey,TValue]+Entry[System.Object,System.Object][]");
        }
        inline app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array* create() {
            return il2cpp::create_object<app::CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array>(get_class());
        }
    } // namespace CacheDict_2_TKey_TValue_Entry_System_Object_System_Object___Array
} // namespace app::classes::types
