#pragma once
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt16.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementUInt16 {
        inline app::IncrementInstruction_IncrementUInt16__Class** type_info() {
            static app::IncrementInstruction_IncrementUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction_IncrementUInt16__Class**)(modloader::win::memory::resolve_rva(0x04771C80));
            }
            return cache;
        }
        inline app::IncrementInstruction_IncrementUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementUInt16");
        }
        inline app::IncrementInstruction_IncrementUInt16* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementUInt16>(get_class());
        }
    } // namespace IncrementInstruction_IncrementUInt16
} // namespace app::classes::types
