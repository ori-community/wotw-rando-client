#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction_NotInt64__Class** type_info;
        inline app::NotInstruction_NotInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt64");
        }
        inline app::NotInstruction_NotInt64* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt64>(get_class());
        }
    } // namespace NotInstruction_NotInt64
} // namespace app::classes::types
