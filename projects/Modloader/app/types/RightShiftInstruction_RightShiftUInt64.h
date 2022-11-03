#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftUInt64 {
        inline app::RightShiftInstruction_RightShiftUInt64__Class** type_info = (app::RightShiftInstruction_RightShiftUInt64__Class**)(modloader::win::memory::resolve_rva(0x04707150));
        inline app::RightShiftInstruction_RightShiftUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftUInt64");
        }
        inline app::RightShiftInstruction_RightShiftUInt64* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftUInt64>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftUInt64
} // namespace app::classes::types
