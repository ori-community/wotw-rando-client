#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftSByte {
        inline app::LeftShiftInstruction_LeftShiftSByte__Class** type_info = (app::LeftShiftInstruction_LeftShiftSByte__Class**)(modloader::win::memory::resolve_rva(0x04712290));
        inline app::LeftShiftInstruction_LeftShiftSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftSByte");
        }
        inline app::LeftShiftInstruction_LeftShiftSByte* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftSByte>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftSByte
} // namespace app::classes::types
