#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementUInt64 {
        inline app::DecrementInstruction_DecrementUInt64__Class** type_info = (app::DecrementInstruction_DecrementUInt64__Class**)(modloader::win::memory::resolve_rva(0x04741660));
        inline app::DecrementInstruction_DecrementUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementUInt64");
        }
        inline app::DecrementInstruction_DecrementUInt64* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementUInt64>(get_class());
        }
    } // namespace DecrementInstruction_DecrementUInt64
} // namespace app::classes::types
