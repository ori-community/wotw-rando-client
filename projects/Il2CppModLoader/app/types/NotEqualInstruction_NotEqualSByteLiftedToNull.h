#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSByteLiftedToNull {
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760660));
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSByteLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSByteLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSByteLiftedToNull
} // namespace app::classes::types
