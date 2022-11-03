#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt32 {
        inline app::AndInstruction_AndInt32__Class** type_info = (app::AndInstruction_AndInt32__Class**)(modloader::win::memory::resolve_rva(0x0474B9B0));
        inline app::AndInstruction_AndInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt32");
        }
        inline app::AndInstruction_AndInt32* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt32>(get_class());
        }
    } // namespace AndInstruction_AndInt32
} // namespace app::classes::types
