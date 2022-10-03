#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSingleLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualSingleLiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualSingleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSingleLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSingleLiftedToNull");
        }
        inline app::EqualInstruction_EqualSingleLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSingleLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualSingleLiftedToNull
} // namespace app::classes::types
