#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementInt16 {
        inline app::DecrementInstruction_DecrementInt16__Class** type_info = (app::DecrementInstruction_DecrementInt16__Class**)(modloader::win::memory::resolve_rva(0x04707F40));
        inline app::DecrementInstruction_DecrementInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementInt16");
        }
        inline app::DecrementInstruction_DecrementInt16* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementInt16>(get_class());
        }
    } // namespace DecrementInstruction_DecrementInt16
} // namespace app::classes::types
