#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulInstruction_MulInt32 {
        inline app::MulInstruction_MulInt32__Class** type_info = (app::MulInstruction_MulInt32__Class**)(modloader::win::memory::resolve_rva(0x04715820));
        inline app::MulInstruction_MulInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulInt32");
        }
        inline app::MulInstruction_MulInt32* create() {
            return il2cpp::create_object<app::MulInstruction_MulInt32>(get_class());
        }
    } // namespace MulInstruction_MulInt32
} // namespace app::classes::types
