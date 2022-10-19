#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftInt64 {
        inline app::LeftShiftInstruction_LeftShiftInt64__Class** type_info = (app::LeftShiftInstruction_LeftShiftInt64__Class**)(modloader::win::memory::resolve_rva(0x04730558));
        inline app::LeftShiftInstruction_LeftShiftInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftInt64");
        }
        inline app::LeftShiftInstruction_LeftShiftInt64* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftInt64>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftInt64
} // namespace app::classes::types
