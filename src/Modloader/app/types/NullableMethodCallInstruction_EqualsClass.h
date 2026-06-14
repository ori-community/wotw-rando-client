#pragma once
#include <Modloader/app/structs/NullableMethodCallInstruction_EqualsClass.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_EqualsClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction_EqualsClass {
        inline app::NullableMethodCallInstruction_EqualsClass__Class** type_info() {
            static app::NullableMethodCallInstruction_EqualsClass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullableMethodCallInstruction_EqualsClass__Class**)(modloader::win::memory::resolve_rva(0x0475ECE0));
            }
            return cache;
        }
        inline app::NullableMethodCallInstruction_EqualsClass__Class* get_class() {
            return il2cpp::get_nested_class<app::NullableMethodCallInstruction_EqualsClass__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction", "EqualsClass");
        }
        inline app::NullableMethodCallInstruction_EqualsClass* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction_EqualsClass>(get_class());
        }
    } // namespace NullableMethodCallInstruction_EqualsClass
} // namespace app::classes::types
