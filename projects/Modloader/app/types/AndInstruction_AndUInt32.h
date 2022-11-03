#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt32 {
        inline app::AndInstruction_AndUInt32__Class** type_info = (app::AndInstruction_AndUInt32__Class**)(modloader::win::memory::resolve_rva(0x04774FD8));
        inline app::AndInstruction_AndUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt32");
        }
        inline app::AndInstruction_AndUInt32* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt32>(get_class());
        }
    } // namespace AndInstruction_AndUInt32
} // namespace app::classes::types
