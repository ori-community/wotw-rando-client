#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValueOrDefault1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction_GetValueOrDefault1__Class** type_info;
        inline app::NullableMethodCallInstruction_GetValueOrDefault1__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValueOrDefault1__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValueOrDefault1");
        }
        inline app::NullableMethodCallInstruction_GetValueOrDefault1* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValueOrDefault1>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValueOrDefault1
} // namespace app::classes::types
