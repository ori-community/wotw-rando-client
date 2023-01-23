#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftInt32__Class.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftInt32.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftInt32 {
        inline app::RightShiftInstruction_RightShiftInt32__Class** type_info = (app::RightShiftInstruction_RightShiftInt32__Class**)(modloader::win::memory::resolve_rva(0x04735EC0));
        inline app::RightShiftInstruction_RightShiftInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftInt32");
        }
        inline app::RightShiftInstruction_RightShiftInt32* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftInt32>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftInt32
} // namespace app::classes::types
