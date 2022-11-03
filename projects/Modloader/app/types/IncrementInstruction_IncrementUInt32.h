#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt32 {
        inline app::IncrementInstruction_IncrementUInt32__Class** type_info = (app::IncrementInstruction_IncrementUInt32__Class**)(modloader::win::memory::resolve_rva(0x04704F40));
        inline app::IncrementInstruction_IncrementUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt32");
        }
        inline app::IncrementInstruction_IncrementUInt32* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt32>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt32
} // namespace app::classes::types
