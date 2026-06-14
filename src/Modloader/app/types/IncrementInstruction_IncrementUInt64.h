#pragma once
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt64.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt64 {
        inline app::IncrementInstruction_IncrementUInt64__Class** type_info() {
            static app::IncrementInstruction_IncrementUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction_IncrementUInt64__Class**)(modloader::win::memory::resolve_rva(0x0473B7F8));
            }
            return cache;
        }
        inline app::IncrementInstruction_IncrementUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt64");
        }
        inline app::IncrementInstruction_IncrementUInt64* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt64>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt64
} // namespace app::classes::types
