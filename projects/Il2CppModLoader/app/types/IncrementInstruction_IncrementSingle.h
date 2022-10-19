#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementSingle {
        inline app::IncrementInstruction_IncrementSingle__Class** type_info = (app::IncrementInstruction_IncrementSingle__Class**)(modloader::win::memory::resolve_rva(0x04747E10));
        inline app::IncrementInstruction_IncrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementSingle");
        }
        inline app::IncrementInstruction_IncrementSingle* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementSingle>(get_class());
        }
    } // namespace IncrementInstruction_IncrementSingle
} // namespace app::classes::types
