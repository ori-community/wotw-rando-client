#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementDouble {
        inline app::IncrementInstruction_IncrementDouble__Class** type_info = (app::IncrementInstruction_IncrementDouble__Class**)(modloader::win::memory::resolve_rva(0x04770DB0));
        inline app::IncrementInstruction_IncrementDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementDouble");
        }
        inline app::IncrementInstruction_IncrementDouble* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementDouble>(get_class());
        }
    } // namespace IncrementInstruction_IncrementDouble
} // namespace app::classes::types
