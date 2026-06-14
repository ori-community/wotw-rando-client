#pragma once
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt32.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt32 {
        inline app::IncrementInstruction_IncrementUInt32__Class** type_info() {
            static app::IncrementInstruction_IncrementUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction_IncrementUInt32__Class**)(modloader::win::memory::resolve_rva(0x04704F40));
            }
            return cache;
        }
        inline app::IncrementInstruction_IncrementUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt32");
        }
        inline app::IncrementInstruction_IncrementUInt32* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt32>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt32
} // namespace app::classes::types
