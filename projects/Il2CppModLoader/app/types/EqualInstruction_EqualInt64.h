#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualInt64__Class** type_info;
        inline app::EqualInstruction_EqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt64");
        }
        inline app::EqualInstruction_EqualInt64* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt64>(get_class());
        }
    } // namespace EqualInstruction_EqualInt64
} // namespace app::classes::types
