#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualCharLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualCharLiftedToNull__Class** type_info;
        inline app::NotEqualInstruction_NotEqualCharLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualCharLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualCharLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualCharLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualCharLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualCharLiftedToNull
} // namespace app::classes::types
