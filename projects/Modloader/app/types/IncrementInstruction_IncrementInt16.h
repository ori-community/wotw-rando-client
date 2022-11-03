#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementInt16 {
        inline app::IncrementInstruction_IncrementInt16__Class** type_info = (app::IncrementInstruction_IncrementInt16__Class**)(modloader::win::memory::resolve_rva(0x04737990));
        inline app::IncrementInstruction_IncrementInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementInt16");
        }
        inline app::IncrementInstruction_IncrementInt16* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementInt16>(get_class());
        }
    } // namespace IncrementInstruction_IncrementInt16
} // namespace app::classes::types
