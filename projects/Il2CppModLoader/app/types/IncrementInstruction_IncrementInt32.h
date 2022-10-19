#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementInt32 {
        inline app::IncrementInstruction_IncrementInt32__Class** type_info = (app::IncrementInstruction_IncrementInt32__Class**)(modloader::win::memory::resolve_rva(0x04784B50));
        inline app::IncrementInstruction_IncrementInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementInt32");
        }
        inline app::IncrementInstruction_IncrementInt32* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementInt32>(get_class());
        }
    } // namespace IncrementInstruction_IncrementInt32
} // namespace app::classes::types
