#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualCharLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualCharLiftedToNull__Class** type_info;
        inline app::EqualInstruction_EqualCharLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualCharLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualCharLiftedToNull");
        }
        inline app::EqualInstruction_EqualCharLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualCharLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualCharLiftedToNull
} // namespace app::classes::types
