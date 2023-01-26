#pragma once
#include <Modloader/app/structs/DivInstruction_DivUInt64.h>
#include <Modloader/app/structs/DivInstruction_DivUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivUInt64 {
        inline app::DivInstruction_DivUInt64__Class** type_info() {
            static app::DivInstruction_DivUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivInstruction_DivUInt64__Class**)(modloader::win::memory::resolve_rva(0x04797820));
            }
            return cache;
        }
        inline app::DivInstruction_DivUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DivInstruction", "DivUInt64");
        }
        inline app::DivInstruction_DivUInt64* create() {
            return il2cpp::create_object<app::DivInstruction_DivUInt64>(get_class());
        }
    } // namespace DivInstruction_DivUInt64
} // namespace app::classes::types
