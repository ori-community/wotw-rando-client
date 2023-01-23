#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_HasValue__Class.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_HasValue.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_HasValue {
        inline app::NullableMethodCallInstruction_HasValue__Class** type_info = (app::NullableMethodCallInstruction_HasValue__Class**)(modloader::win::memory::resolve_rva(0x0470E5B0));
        inline app::NullableMethodCallInstruction_HasValue__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_HasValue__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "HasValue");
        }
        inline app::NullableMethodCallInstruction_HasValue* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_HasValue>(get_class());
        }
    } // namespace NullableMethodCallInstruction_HasValue
} // namespace app::classes::types
