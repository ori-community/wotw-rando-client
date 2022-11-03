#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualChar {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x047697D8));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualChar");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualChar
} // namespace app::classes::types
