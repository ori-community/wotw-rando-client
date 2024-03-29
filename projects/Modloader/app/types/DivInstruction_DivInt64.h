#pragma once
#include <Modloader/app/structs/DivInstruction_DivInt64.h>
#include <Modloader/app/structs/DivInstruction_DivInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt64 {
        inline app::DivInstruction_DivInt64__Class** type_info() {
            static app::DivInstruction_DivInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivInstruction_DivInt64__Class**)(modloader::win::memory::resolve_rva(0x04752DD0));
            }
            return cache;
        }
        inline app::DivInstruction_DivInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt64");
        }
        inline app::DivInstruction_DivInt64* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt64>(get_class());
        }
    } // namespace DivInstruction_DivInt64
} // namespace app::classes::types
