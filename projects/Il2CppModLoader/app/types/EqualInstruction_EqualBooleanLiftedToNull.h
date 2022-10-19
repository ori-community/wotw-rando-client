#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualBooleanLiftedToNull {
        inline app::EqualInstruction_EqualBooleanLiftedToNull__Class** type_info = (app::EqualInstruction_EqualBooleanLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04772630));
        inline app::EqualInstruction_EqualBooleanLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualBooleanLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualBooleanLiftedToNull");
        }
        inline app::EqualInstruction_EqualBooleanLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualBooleanLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualBooleanLiftedToNull
} // namespace app::classes::types
