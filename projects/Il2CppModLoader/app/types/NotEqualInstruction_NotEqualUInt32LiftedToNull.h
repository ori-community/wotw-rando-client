#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt32LiftedToNull {
        inline app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04782670));
        inline app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt32LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt32LiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualUInt32LiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt32LiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt32LiftedToNull
} // namespace app::classes::types
