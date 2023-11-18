#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt64.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementUInt64 {
        inline app::DecrementInstruction_DecrementUInt64__Class** type_info() {
            static app::DecrementInstruction_DecrementUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementUInt64__Class**)(modloader::win::memory::resolve_rva(0x04741660));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementUInt64");
        }
        inline app::DecrementInstruction_DecrementUInt64* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementUInt64>(get_class());
        }
    } // namespace DecrementInstruction_DecrementUInt64
} // namespace app::classes::types
