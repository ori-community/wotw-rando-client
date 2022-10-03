#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOvfInstruction_AddOvfInt64__Class** type_info;
        inline app::AddOvfInstruction_AddOvfInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfInt64");
        }
        inline app::AddOvfInstruction_AddOvfInt64* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfInt64>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfInt64
} // namespace app::classes::types
