#pragma once
#include <Modloader/app/structs/ValueTuple_4_String_Int32_Int32_Single___Array.h>
#include <Modloader/app/structs/ValueTuple_4_String_Int32_Int32_Single___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueTuple_4_String_Int32_Int32_Single___Array {
        inline app::ValueTuple_4_String_Int32_Int32_Single___Array__Class** type_info() {
            static app::ValueTuple_4_String_Int32_Int32_Single___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueTuple_4_String_Int32_Int32_Single___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueTuple_4_String_Int32_Int32_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_4_String_Int32_Int32_Single___Array__Class>(type_info(), "System", "ValueTuple`4[String,Int32,Int32,Single][]");
        }
        inline app::ValueTuple_4_String_Int32_Int32_Single___Array* create() {
            return il2cpp::create_object<app::ValueTuple_4_String_Int32_Int32_Single___Array>(get_class());
        }
    } // namespace ValueTuple_4_String_Int32_Int32_Single___Array
} // namespace app::classes::types
