#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction_AddInt64 {
        inline app::AddInstruction_AddInt64__Class** type_info = (app::AddInstruction_AddInt64__Class**)(modloader::win::memory::resolve_rva(0x04710318));
        inline app::AddInstruction_AddInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddInt64");
        }
        inline app::AddInstruction_AddInt64* create() {
            return il2cpp::create_object<app::AddInstruction_AddInt64>(get_class());
        }
    } // namespace AddInstruction_AddInt64
} // namespace app::classes::types
