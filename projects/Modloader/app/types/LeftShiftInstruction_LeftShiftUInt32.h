#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftUInt32__Class.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftUInt32.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftUInt32 {
        inline app::LeftShiftInstruction_LeftShiftUInt32__Class** type_info = (app::LeftShiftInstruction_LeftShiftUInt32__Class**)(modloader::win::memory::resolve_rva(0x04759350));
        inline app::LeftShiftInstruction_LeftShiftUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftUInt32");
        }
        inline app::LeftShiftInstruction_LeftShiftUInt32* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftUInt32>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftUInt32
} // namespace app::classes::types
