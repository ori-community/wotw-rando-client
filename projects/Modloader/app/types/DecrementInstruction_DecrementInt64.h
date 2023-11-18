#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementInt64.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementInt64 {
        inline app::DecrementInstruction_DecrementInt64__Class** type_info() {
            static app::DecrementInstruction_DecrementInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementInt64__Class**)(modloader::win::memory::resolve_rva(0x04798F20));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementInt64");
        }
        inline app::DecrementInstruction_DecrementInt64* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementInt64>(get_class());
        }
    } // namespace DecrementInstruction_DecrementInt64
} // namespace app::classes::types
