#pragma once
#include <Modloader/app/structs/DecrementInstruction_DecrementDouble.h>
#include <Modloader/app/structs/DecrementInstruction_DecrementDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementDouble {
        inline app::DecrementInstruction_DecrementDouble__Class** type_info() {
            static app::DecrementInstruction_DecrementDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction_DecrementDouble__Class**)(modloader::win::memory::resolve_rva(0x04706820));
            }
            return cache;
        }
        inline app::DecrementInstruction_DecrementDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementDouble");
        }
        inline app::DecrementInstruction_DecrementDouble* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementDouble>(get_class());
        }
    } // namespace DecrementInstruction_DecrementDouble
} // namespace app::classes::types
