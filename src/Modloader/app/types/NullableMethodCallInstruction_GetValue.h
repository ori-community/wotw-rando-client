#pragma once
#include <Modloader/app/structs/NullableMethodCallInstruction_GetValue.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_GetValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValue {
        inline app::NullableMethodCallInstruction_GetValue__Class** type_info() {
            static app::NullableMethodCallInstruction_GetValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullableMethodCallInstruction_GetValue__Class**)(modloader::win::memory::resolve_rva(0x04731A18));
            }
            return cache;
        }
        inline app::NullableMethodCallInstruction_GetValue__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValue__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValue");
        }
        inline app::NullableMethodCallInstruction_GetValue* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValue>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValue
} // namespace app::classes::types
