#pragma once
#include <Modloader/app/structs/AndInstruction_AndInt64.h>
#include <Modloader/app/structs/AndInstruction_AndInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt64 {
        inline app::AndInstruction_AndInt64__Class** type_info() {
            static app::AndInstruction_AndInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndInt64__Class**)(modloader::win::memory::resolve_rva(0x04787DD8));
            }
            return cache;
        }
        inline app::AndInstruction_AndInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt64");
        }
        inline app::AndInstruction_AndInt64* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt64>(get_class());
        }
    } // namespace AndInstruction_AndInt64
} // namespace app::classes::types
