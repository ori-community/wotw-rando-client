#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulInstruction_MulInt16 {
        inline app::MulInstruction_MulInt16__Class** type_info = (app::MulInstruction_MulInt16__Class**)(modloader::win::memory::resolve_rva(0x04709EB0));
        inline app::MulInstruction_MulInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulInt16");
        }
        inline app::MulInstruction_MulInt16* create() {
            return il2cpp::create_object<app::MulInstruction_MulInt16>(get_class());
        }
    } // namespace MulInstruction_MulInt16
} // namespace app::classes::types
