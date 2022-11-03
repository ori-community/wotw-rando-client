#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt64 {
        inline app::AddInstruction_AddUInt64__Class** type_info = (app::AddInstruction_AddUInt64__Class**)(modloader::win::memory::resolve_rva(0x04707A40));
        inline app::AddInstruction_AddUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt64");
        }
        inline app::AddInstruction_AddUInt64* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt64>(get_class());
        }
    } // namespace AddInstruction_AddUInt64
} // namespace app::classes::types
