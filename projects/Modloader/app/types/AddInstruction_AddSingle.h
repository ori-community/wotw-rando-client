#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction_AddSingle {
        inline app::AddInstruction_AddSingle__Class** type_info = (app::AddInstruction_AddSingle__Class**)(modloader::win::memory::resolve_rva(0x0470F040));
        inline app::AddInstruction_AddSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddSingle");
        }
        inline app::AddInstruction_AddSingle* create() {
            return il2cpp::create_object<app::AddInstruction_AddSingle>(get_class());
        }
    } // namespace AddInstruction_AddSingle
} // namespace app::classes::types
