#pragma once
#include <Modloader/app/structs/NullableMethodCallInstruction_GetValueOrDefault.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_GetValueOrDefault__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_GetValueOrDefault {
        inline app::NullableMethodCallInstruction_GetValueOrDefault__Class** type_info() {
            static app::NullableMethodCallInstruction_GetValueOrDefault__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullableMethodCallInstruction_GetValueOrDefault__Class**)(modloader::win::memory::resolve_rva(0x047129C8));
            }
            return cache;
        }
        inline app::NullableMethodCallInstruction_GetValueOrDefault__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_GetValueOrDefault__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "GetValueOrDefault");
        }
        inline app::NullableMethodCallInstruction_GetValueOrDefault* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_GetValueOrDefault>(get_class());
        }
    } // namespace NullableMethodCallInstruction_GetValueOrDefault
} // namespace app::classes::types
