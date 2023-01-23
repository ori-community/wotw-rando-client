#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AndInstruction_AndInt64__Class.h>
#include <Modloader/app/structs/AndInstruction_AndInt64.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt64 {
        inline app::AndInstruction_AndInt64__Class** type_info = (app::AndInstruction_AndInt64__Class**)(modloader::win::memory::resolve_rva(0x04787DD8));
        inline app::AndInstruction_AndInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt64");
        }
        inline app::AndInstruction_AndInt64* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt64>(get_class());
        }
    } // namespace AndInstruction_AndInt64
} // namespace app::classes::types
