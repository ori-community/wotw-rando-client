#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt64 {
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrInt64__Class**)(modloader::win::memory::resolve_rva(0x047220A0));
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt64");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt64>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt64
} // namespace app::classes::types
