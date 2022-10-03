#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetHashCodeClass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction_GetHashCodeClass__Class** type_info;
        inline app::NullableMethodCallInstruction_GetHashCodeClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetHashCodeClass__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetHashCodeClass");
        }
        inline app::NullableMethodCallInstruction_GetHashCodeClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetHashCodeClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetHashCodeClass
} // namespace app::classes::types
