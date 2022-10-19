#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_ToStringClass {
        inline app::NullableMethodCallInstruction_ToStringClass__Class** type_info = (app::NullableMethodCallInstruction_ToStringClass__Class**)(modloader::win::memory::resolve_rva(0x04793318));
        inline app::NullableMethodCallInstruction_ToStringClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_ToStringClass__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "ToStringClass");
        }
        inline app::NullableMethodCallInstruction_ToStringClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_ToStringClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_ToStringClass
} // namespace app::classes::types
