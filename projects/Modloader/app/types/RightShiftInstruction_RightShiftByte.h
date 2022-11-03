#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftByte {
        inline app::RightShiftInstruction_RightShiftByte__Class** type_info = (app::RightShiftInstruction_RightShiftByte__Class**)(modloader::win::memory::resolve_rva(0x04725630));
        inline app::RightShiftInstruction_RightShiftByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftByte");
        }
        inline app::RightShiftInstruction_RightShiftByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftByte
} // namespace app::classes::types
