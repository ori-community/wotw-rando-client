#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_GetHashCodeClass__Class.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_GetHashCodeClass.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetHashCodeClass {
        inline app::NullableMethodCallInstruction_GetHashCodeClass__Class** type_info = (app::NullableMethodCallInstruction_GetHashCodeClass__Class**)(modloader::win::memory::resolve_rva(0x0472CE18));
        inline app::NullableMethodCallInstruction_GetHashCodeClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetHashCodeClass__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetHashCodeClass");
        }
        inline app::NullableMethodCallInstruction_GetHashCodeClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetHashCodeClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetHashCodeClass
} // namespace app::classes::types
