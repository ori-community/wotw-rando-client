#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_HasValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction_HasValue__Class** type_info;
        inline app::NullableMethodCallInstruction_HasValue__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_HasValue__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "HasValue");
        }
        inline app::NullableMethodCallInstruction_HasValue* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_HasValue>(get_class());
        }
    } // namespace NullableMethodCallInstruction_HasValue
} // namespace app::classes::types
