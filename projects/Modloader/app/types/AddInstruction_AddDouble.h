#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction_AddDouble {
        inline app::AddInstruction_AddDouble__Class** type_info = (app::AddInstruction_AddDouble__Class**)(modloader::win::memory::resolve_rva(0x04754388));
        inline app::AddInstruction_AddDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddDouble");
        }
        inline app::AddInstruction_AddDouble* create() {
            return il2cpp::create_object<app::AddInstruction_AddDouble>(get_class());
        }
    } // namespace AddInstruction_AddDouble
} // namespace app::classes::types
