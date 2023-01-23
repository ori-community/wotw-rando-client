#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt64__Class.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt64.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt64 {
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrInt64__Class**)(modloader::win::memory::resolve_rva(0x047220A0));
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt64");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt64* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt64>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt64
} // namespace app::classes::types
