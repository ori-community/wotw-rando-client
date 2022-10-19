#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt32 {
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrInt32__Class**)(modloader::win::memory::resolve_rva(0x04729628));
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt32");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt32>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt32
} // namespace app::classes::types
