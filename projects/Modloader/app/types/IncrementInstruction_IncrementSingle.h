#pragma once
#include <Modloader/app/structs/IncrementInstruction_IncrementSingle.h>
#include <Modloader/app/structs/IncrementInstruction_IncrementSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementSingle {
        inline app::IncrementInstruction_IncrementSingle__Class** type_info() {
            static app::IncrementInstruction_IncrementSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction_IncrementSingle__Class**)(modloader::win::memory::resolve_rva(0x04747E10));
            }
            return cache;
        }
        inline app::IncrementInstruction_IncrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementSingle");
        }
        inline app::IncrementInstruction_IncrementSingle* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementSingle>(get_class());
        }
    } // namespace IncrementInstruction_IncrementSingle
} // namespace app::classes::types
