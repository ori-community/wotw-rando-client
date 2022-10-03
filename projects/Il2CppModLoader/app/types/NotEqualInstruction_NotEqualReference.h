#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualReference__Class** type_info;
        inline app::NotEqualInstruction_NotEqualReference__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualReference__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualReference");
        }
        inline app::NotEqualInstruction_NotEqualReference* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualReference>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualReference
} // namespace app::classes::types
