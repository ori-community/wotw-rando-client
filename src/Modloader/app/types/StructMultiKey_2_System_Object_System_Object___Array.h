#pragma once
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/StructMultiKey_2_System_Object_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StructMultiKey_2_System_Object_System_Object___Array {
        inline app::StructMultiKey_2_System_Object_System_Object___Array__Class** type_info() {
            static app::StructMultiKey_2_System_Object_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StructMultiKey_2_System_Object_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StructMultiKey_2_System_Object_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::StructMultiKey_2_System_Object_System_Object___Array__Class>(type_info(), "Newtonsoft.Json.Utilities", "StructMultiKey`2[System.Object,System.Object][]");
        }
        inline app::StructMultiKey_2_System_Object_System_Object___Array* create() {
            return il2cpp::create_object<app::StructMultiKey_2_System_Object_System_Object___Array>(get_class());
        }
    } // namespace StructMultiKey_2_System_Object_System_Object___Array
} // namespace app::classes::types
