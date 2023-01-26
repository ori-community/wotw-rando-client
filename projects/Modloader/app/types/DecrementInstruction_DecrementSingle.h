#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementSingle.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementSingle {
        inline app::DecrementInstruction_DecrementSingle__Class** type_info() {
            static app::DecrementInstruction_DecrementSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementSingle__Class**)(modloader::win::memory::resolve_rva(0x0472F8A0));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementSingle");
        }
        inline app::DecrementInstruction_DecrementSingle* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementSingle>(get_class());
        }
    } // namespace DecrementInstruction_DecrementSingle
} // namespace app::classes::types
