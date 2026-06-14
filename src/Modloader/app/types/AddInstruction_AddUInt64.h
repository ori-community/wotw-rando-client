#pragma once
#include <Modloader/app/structs/AddInstruction_AddUInt64.h>
#include <Modloader/app/structs/AddInstruction_AddUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt64 {
        inline app::AddInstruction_AddUInt64__Class** type_info() {
            static app::AddInstruction_AddUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddInstruction_AddUInt64__Class**)(modloader::win::memory::resolve_rva(0x04707A40));
            }
            return cache;
        }
        inline app::AddInstruction_AddUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt64");
        }
        inline app::AddInstruction_AddUInt64* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt64>(get_class());
        }
    } // namespace AddInstruction_AddUInt64
} // namespace app::classes::types
