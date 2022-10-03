#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_EqualsClass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction_EqualsClass__Class** type_info;
        inline app::NullableMethodCallInstruction_EqualsClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_EqualsClass__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "EqualsClass");
        }
        inline app::NullableMethodCallInstruction_EqualsClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_EqualsClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_EqualsClass
} // namespace app::classes::types
