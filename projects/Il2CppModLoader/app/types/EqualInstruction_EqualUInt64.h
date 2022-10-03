#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualUInt64__Class** type_info;
        inline app::EqualInstruction_EqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt64");
        }
        inline app::EqualInstruction_EqualUInt64* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt64>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt64
} // namespace app::classes::types
