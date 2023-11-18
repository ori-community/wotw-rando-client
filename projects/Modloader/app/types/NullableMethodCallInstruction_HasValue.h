#pragma once
#include <Modloader/app/structs/NullableMethodCallInstruction_HasValue.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_HasValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_HasValue {
        inline app::NullableMethodCallInstruction_HasValue__Class** type_info() {
            static app::NullableMethodCallInstruction_HasValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullableMethodCallInstruction_HasValue__Class**)(modloader::win::memory::resolve_rva(0x0470E5B0));
            }
            return cache;
        }
        inline app::NullableMethodCallInstruction_HasValue__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_HasValue__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "HasValue");
        }
        inline app::NullableMethodCallInstruction_HasValue* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_HasValue>(get_class());
        }
    } // namespace NullableMethodCallInstruction_HasValue
} // namespace app::classes::types
