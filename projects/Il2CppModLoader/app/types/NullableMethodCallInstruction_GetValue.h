#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction_GetValue__Class** type_info;
        inline app::NullableMethodCallInstruction_GetValue__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValue__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValue");
        }
        inline app::NullableMethodCallInstruction_GetValue* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValue>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValue
} // namespace app::classes::types
