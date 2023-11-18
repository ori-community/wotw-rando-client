#pragma once
#include <Modloader/app/structs/IncrementInstruction_IncrementInt64.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementInt64 {
        inline app::IncrementInstruction_IncrementInt64__Class** type_info() {
            static app::IncrementInstruction_IncrementInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction_IncrementInt64__Class**)(modloader::win::memory::resolve_rva(0x04714140));
            }
            return cache;
        }
        inline app::IncrementInstruction_IncrementInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementInt64");
        }
        inline app::IncrementInstruction_IncrementInt64* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementInt64>(get_class());
        }
    } // namespace IncrementInstruction_IncrementInt64
} // namespace app::classes::types
