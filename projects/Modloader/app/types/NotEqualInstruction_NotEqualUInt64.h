#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt64 {
        inline app::NotEqualInstruction_NotEqualUInt64__Class** type_info = (app::NotEqualInstruction_NotEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0475AB50));
        inline app::NotEqualInstruction_NotEqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt64");
        }
        inline app::NotEqualInstruction_NotEqualUInt64* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt64>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt64
} // namespace app::classes::types
