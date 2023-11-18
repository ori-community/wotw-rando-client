#pragma once
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32___Array.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueTuple_3_Int32_Object_Int32___Array {
        inline app::ValueTuple_3_Int32_Object_Int32___Array__Class** type_info() {
            static app::ValueTuple_3_Int32_Object_Int32___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueTuple_3_Int32_Object_Int32___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueTuple_3_Int32_Object_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_3_Int32_Object_Int32___Array__Class>(type_info(), "System", "ValueTuple`3[Int32,Object,Int32][]");
        }
        inline app::ValueTuple_3_Int32_Object_Int32___Array* create() {
            return il2cpp::create_object<app::ValueTuple_3_Int32_Object_Int32___Array>(get_class());
        }
    } // namespace ValueTuple_3_Int32_Object_Int32___Array
} // namespace app::classes::types
