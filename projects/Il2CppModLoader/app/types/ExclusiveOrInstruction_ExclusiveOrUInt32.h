#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrUInt32 {
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class**)(modloader::win::memory::resolve_rva(0x04782FF0));
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrUInt32");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt32* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrUInt32>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrUInt32
} // namespace app::classes::types
