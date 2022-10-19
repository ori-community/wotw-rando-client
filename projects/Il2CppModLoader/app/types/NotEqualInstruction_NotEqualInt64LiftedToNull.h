#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt64LiftedToNull {
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0471ACB0));
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt64LiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt64LiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt64LiftedToNull
} // namespace app::classes::types
