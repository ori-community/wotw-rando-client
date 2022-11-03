#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulInstruction_MulInt64 {
        inline app::MulInstruction_MulInt64__Class** type_info = (app::MulInstruction_MulInt64__Class**)(modloader::win::memory::resolve_rva(0x04719810));
        inline app::MulInstruction_MulInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulInt64");
        }
        inline app::MulInstruction_MulInt64* create() {
            return il2cpp::create_object<app::MulInstruction_MulInt64>(get_class());
        }
    } // namespace MulInstruction_MulInt64
} // namespace app::classes::types
