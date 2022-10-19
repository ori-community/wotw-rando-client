#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class**)(modloader::win::memory::resolve_rva(0x04721D10));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualInt16");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16
} // namespace app::classes::types
