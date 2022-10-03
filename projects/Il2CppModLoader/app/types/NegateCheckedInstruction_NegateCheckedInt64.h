#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction_NegateCheckedInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateCheckedInstruction_NegateCheckedInt64__Class** type_info;
        inline app::NegateCheckedInstruction_NegateCheckedInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateCheckedInstruction_NegateCheckedInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction", "NegateCheckedInt64");
        }
        inline app::NegateCheckedInstruction_NegateCheckedInt64* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction_NegateCheckedInt64>(get_class());
        }
    } // namespace NegateCheckedInstruction_NegateCheckedInt64
} // namespace app::classes::types
