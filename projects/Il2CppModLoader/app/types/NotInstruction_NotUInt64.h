#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction_NotUInt64__Class** type_info;
        inline app::NotInstruction_NotUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotUInt64");
        }
        inline app::NotInstruction_NotUInt64* create() {
            return il2cpp::create_object<app::NotInstruction_NotUInt64>(get_class());
        }
    } // namespace NotInstruction_NotUInt64
} // namespace app::classes::types
