#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0478BC68));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualSingle");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle
} // namespace app::classes::types
