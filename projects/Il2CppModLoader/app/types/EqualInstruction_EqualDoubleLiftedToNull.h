#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualDoubleLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualDoubleLiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualDoubleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualDoubleLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualDoubleLiftedToNull");
        }
        inline app::EqualInstruction_EqualDoubleLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualDoubleLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualDoubleLiftedToNull
} // namespace app::classes::types
