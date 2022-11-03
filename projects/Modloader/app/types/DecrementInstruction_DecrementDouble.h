#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementDouble {
        inline app::DecrementInstruction_DecrementDouble__Class** type_info = (app::DecrementInstruction_DecrementDouble__Class**)(modloader::win::memory::resolve_rva(0x04706820));
        inline app::DecrementInstruction_DecrementDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementDouble");
        }
        inline app::DecrementInstruction_DecrementDouble* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementDouble>(get_class());
        }
    } // namespace DecrementInstruction_DecrementDouble
} // namespace app::classes::types
