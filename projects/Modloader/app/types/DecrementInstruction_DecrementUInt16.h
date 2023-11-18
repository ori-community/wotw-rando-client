#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt16.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementUInt16 {
        inline app::DecrementInstruction_DecrementUInt16__Class** type_info() {
            static app::DecrementInstruction_DecrementUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementUInt16__Class**)(modloader::win::memory::resolve_rva(0x04758A10));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementUInt16");
        }
        inline app::DecrementInstruction_DecrementUInt16* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementUInt16>(get_class());
        }
    } // namespace DecrementInstruction_DecrementUInt16
} // namespace app::classes::types
