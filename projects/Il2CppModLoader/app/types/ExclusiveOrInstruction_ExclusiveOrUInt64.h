#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class** type_info;
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrUInt64");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt64* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrUInt64>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrUInt64
} // namespace app::classes::types
