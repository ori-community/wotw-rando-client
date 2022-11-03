#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt32 {
        inline app::AddInstruction_AddUInt32__Class** type_info = (app::AddInstruction_AddUInt32__Class**)(modloader::win::memory::resolve_rva(0x04792D28));
        inline app::AddInstruction_AddUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt32");
        }
        inline app::AddInstruction_AddUInt32* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt32>(get_class());
        }
    } // namespace AddInstruction_AddUInt32
} // namespace app::classes::types
