#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualBoolean__Class** type_info;
        inline app::EqualInstruction_EqualBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualBoolean");
        }
        inline app::EqualInstruction_EqualBoolean* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualBoolean>(get_class());
        }
    } // namespace EqualInstruction_EqualBoolean
} // namespace app::classes::types
