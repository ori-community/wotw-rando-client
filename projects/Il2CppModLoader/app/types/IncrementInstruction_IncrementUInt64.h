#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction_IncrementUInt64__Class** type_info;
        inline app::IncrementInstruction_IncrementUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt64");
        }
        inline app::IncrementInstruction_IncrementUInt64* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt64>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt64
} // namespace app::classes::types
