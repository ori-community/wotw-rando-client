#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt16LiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualInt16LiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualInt16LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt16LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt16LiftedToNull");
        }
        inline app::EqualInstruction_EqualInt16LiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt16LiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualInt16LiftedToNull
} // namespace app::classes::types
