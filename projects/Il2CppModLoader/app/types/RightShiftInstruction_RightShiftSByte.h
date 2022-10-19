#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftSByte {
        inline app::RightShiftInstruction_RightShiftSByte__Class** type_info = (app::RightShiftInstruction_RightShiftSByte__Class**)(modloader::win::memory::resolve_rva(0x04754B98));
        inline app::RightShiftInstruction_RightShiftSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftSByte");
        }
        inline app::RightShiftInstruction_RightShiftSByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftSByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftSByte
} // namespace app::classes::types
