#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualBoolean__Class** type_info;
        inline app::NotEqualInstruction_NotEqualBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualBoolean");
        }
        inline app::NotEqualInstruction_NotEqualBoolean* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualBoolean>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualBoolean
} // namespace app::classes::types
