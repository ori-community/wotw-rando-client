#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0478BB40));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualUInt64");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64
} // namespace app::classes::types
