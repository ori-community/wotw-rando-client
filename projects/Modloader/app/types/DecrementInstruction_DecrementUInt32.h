#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt32__Class.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt32.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementUInt32 {
        inline app::DecrementInstruction_DecrementUInt32__Class** type_info = (app::DecrementInstruction_DecrementUInt32__Class**)(modloader::win::memory::resolve_rva(0x0472D000));
        inline app::DecrementInstruction_DecrementUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementUInt32");
        }
        inline app::DecrementInstruction_DecrementUInt32* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementUInt32>(get_class());
        }
    } // namespace DecrementInstruction_DecrementUInt32
} // namespace app::classes::types
