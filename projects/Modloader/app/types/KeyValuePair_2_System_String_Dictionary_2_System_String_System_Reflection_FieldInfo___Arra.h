#pragma once
#include <Modloader/app/structs/KeyValuePair_2_System_String_Dictionar_2_Syste_Strin_Syste_Reflectio_FieldInf___Arra__Clas.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
        inline app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class** type_info() {
            static app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[System.String,Dictionary`2[System.String,System.Reflection.FieldInfo]][]");
        }
        inline app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array
} // namespace app::classes::types
