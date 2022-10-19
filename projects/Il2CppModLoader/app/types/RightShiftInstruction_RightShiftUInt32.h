#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftUInt32 {
        inline app::RightShiftInstruction_RightShiftUInt32__Class** type_info = (app::RightShiftInstruction_RightShiftUInt32__Class**)(modloader::win::memory::resolve_rva(0x047018C0));
        inline app::RightShiftInstruction_RightShiftUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftUInt32");
        }
        inline app::RightShiftInstruction_RightShiftUInt32* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftUInt32>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftUInt32
} // namespace app::classes::types
