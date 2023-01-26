#pragma once
#include <Modloader/app/structs/DivInstruction_DivSingle.h>
#include <Modloader/app/structs/DivInstruction_DivSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivSingle {
        inline app::DivInstruction_DivSingle__Class** type_info() {
            static app::DivInstruction_DivSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivInstruction_DivSingle__Class**)(modloader::win::memory::resolve_rva(0x0471D008));
            }
            return cache;
        }
        inline app::DivInstruction_DivSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DivInstruction", "DivSingle");
        }
        inline app::DivInstruction_DivSingle* create() {
            return il2cpp::create_object<app::DivInstruction_DivSingle>(get_class());
        }
    } // namespace DivInstruction_DivSingle
} // namespace app::classes::types
