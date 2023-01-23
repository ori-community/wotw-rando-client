#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt16__Class.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt16.h>

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
