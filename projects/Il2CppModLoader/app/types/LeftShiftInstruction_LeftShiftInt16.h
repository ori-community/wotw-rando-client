#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftInt16 {
        inline app::LeftShiftInstruction_LeftShiftInt16__Class** type_info = (app::LeftShiftInstruction_LeftShiftInt16__Class**)(modloader::win::memory::resolve_rva(0x0473A410));
        inline app::LeftShiftInstruction_LeftShiftInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftInt16");
        }
        inline app::LeftShiftInstruction_LeftShiftInt16* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftInt16>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftInt16
} // namespace app::classes::types
