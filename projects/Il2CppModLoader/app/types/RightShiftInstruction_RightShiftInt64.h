#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftInt64 {
        inline app::RightShiftInstruction_RightShiftInt64__Class** type_info = (app::RightShiftInstruction_RightShiftInt64__Class**)(modloader::win::memory::resolve_rva(0x04761F88));
        inline app::RightShiftInstruction_RightShiftInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftInt64");
        }
        inline app::RightShiftInstruction_RightShiftInt64* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftInt64>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftInt64
} // namespace app::classes::types
