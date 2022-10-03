#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSByteLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualSByteLiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualSByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSByteLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSByteLiftedToNull");
        }
        inline app::EqualInstruction_EqualSByteLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSByteLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualSByteLiftedToNull
} // namespace app::classes::types
