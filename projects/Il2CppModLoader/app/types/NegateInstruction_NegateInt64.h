#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateInstruction_NegateInt64__Class** type_info;
        inline app::NegateInstruction_NegateInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateInt64");
        }
        inline app::NegateInstruction_NegateInt64* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateInt64>(get_class());
        }
    } // namespace NegateInstruction_NegateInt64
} // namespace app::classes::types
