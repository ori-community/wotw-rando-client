#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementInt32.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementInt32 {
        inline app::DecrementInstruction_DecrementInt32__Class** type_info() {
            static app::DecrementInstruction_DecrementInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementInt32__Class**)(modloader::win::memory::resolve_rva(0x0471FD58));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementInt32");
        }
        inline app::DecrementInstruction_DecrementInt32* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementInt32>(get_class());
        }
    } // namespace DecrementInstruction_DecrementInt32
} // namespace app::classes::types
