#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementInt64 {
        inline app::IncrementInstruction_IncrementInt64__Class** type_info = (app::IncrementInstruction_IncrementInt64__Class**)(modloader::win::memory::resolve_rva(0x04714140));
        inline app::IncrementInstruction_IncrementInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementInt64");
        }
        inline app::IncrementInstruction_IncrementInt64* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementInt64>(get_class());
        }
    } // namespace IncrementInstruction_IncrementInt64
} // namespace app::classes::types
