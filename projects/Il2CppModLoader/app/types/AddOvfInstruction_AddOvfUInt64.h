#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOvfInstruction_AddOvfUInt64__Class** type_info;
        inline app::AddOvfInstruction_AddOvfUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfUInt64");
        }
        inline app::AddOvfInstruction_AddOvfUInt64* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfUInt64>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfUInt64
} // namespace app::classes::types
