#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction_OrBoolean {
        inline app::OrInstruction_OrBoolean__Class** type_info = (app::OrInstruction_OrBoolean__Class**)(modloader::win::memory::resolve_rva(0x047438F8));
        inline app::OrInstruction_OrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrBoolean");
        }
        inline app::OrInstruction_OrBoolean* create() {
            return il2cpp::create_object<app::OrInstruction_OrBoolean>(get_class());
        }
    } // namespace OrInstruction_OrBoolean
} // namespace app::classes::types
