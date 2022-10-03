#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualBooleanLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualBooleanLiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualBooleanLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualBooleanLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualBooleanLiftedToNull");
        }
        inline app::EqualInstruction_EqualBooleanLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualBooleanLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualBooleanLiftedToNull
} // namespace app::classes::types
