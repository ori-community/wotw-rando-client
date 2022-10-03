#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanUInt64__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanUInt64");
        }
        inline app::GreaterThanInstruction_GreaterThanUInt64* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanUInt64>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanUInt64
} // namespace app::classes::types
