#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueTuple_4_String_Int32_Int32_Single___Array {
        namespace {
            app::ValueTuple_4_String_Int32_Int32_Single___Array__Class* type_info_ref = nullptr;
        }
        app::ValueTuple_4_String_Int32_Int32_Single___Array__Class** type_info = &type_info_ref;
        inline app::ValueTuple_4_String_Int32_Int32_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::ValueTuple_4_String_Int32_Int32_Single___Array__Class>(type_info, "System", "ValueTuple`4[String,Int32,Int32,Single][]");
        }
        inline app::ValueTuple_4_String_Int32_Int32_Single___Array* create() {
            return il2cpp::create_object<app::ValueTuple_4_String_Int32_Int32_Single___Array>(get_class());
        }
    } // namespace ValueTuple_4_String_Int32_Int32_Single___Array
} // namespace app::classes::types
