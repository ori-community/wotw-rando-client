#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementSingle {
        inline app::DecrementInstruction_DecrementSingle__Class** type_info = (app::DecrementInstruction_DecrementSingle__Class**)(modloader::win::memory::resolve_rva(0x0472F8A0));
        inline app::DecrementInstruction_DecrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementSingle");
        }
        inline app::DecrementInstruction_DecrementSingle* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementSingle>(get_class());
        }
    } // namespace DecrementInstruction_DecrementSingle
} // namespace app::classes::types
