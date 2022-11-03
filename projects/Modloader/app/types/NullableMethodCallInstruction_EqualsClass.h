#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_EqualsClass {
        inline app::NullableMethodCallInstruction_EqualsClass__Class** type_info = (app::NullableMethodCallInstruction_EqualsClass__Class**)(modloader::win::memory::resolve_rva(0x0475ECE0));
        inline app::NullableMethodCallInstruction_EqualsClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_EqualsClass__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "EqualsClass");
        }
        inline app::NullableMethodCallInstruction_EqualsClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_EqualsClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_EqualsClass
} // namespace app::classes::types
