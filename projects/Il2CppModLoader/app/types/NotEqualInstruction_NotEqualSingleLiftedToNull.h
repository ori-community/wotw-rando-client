#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSingleLiftedToNull {
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760778));
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSingleLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSingleLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSingleLiftedToNull
} // namespace app::classes::types
