#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrUInt64 {
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class**)(modloader::win::memory::resolve_rva(0x0472D8C0));
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrUInt64");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt64* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrUInt64>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrUInt64
} // namespace app::classes::types
