#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValueOrDefault {
        inline app::NullableMethodCallInstruction_GetValueOrDefault__Class** type_info = (app::NullableMethodCallInstruction_GetValueOrDefault__Class**)(modloader::win::memory::resolve_rva(0x047129C8));
        inline app::NullableMethodCallInstruction_GetValueOrDefault__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValueOrDefault__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValueOrDefault");
        }
        inline app::NullableMethodCallInstruction_GetValueOrDefault* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValueOrDefault>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValueOrDefault
} // namespace app::classes::types
