#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecrementInstruction_DecrementInt64__Class** type_info;
        inline app::DecrementInstruction_DecrementInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementInt64");
        }
        inline app::DecrementInstruction_DecrementInt64* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementInt64>(get_class());
        }
    } // namespace DecrementInstruction_DecrementInt64
} // namespace app::classes::types
