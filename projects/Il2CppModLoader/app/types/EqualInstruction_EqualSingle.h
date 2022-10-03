#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualSingle__Class** type_info;
        inline app::EqualInstruction_EqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSingle");
        }
        inline app::EqualInstruction_EqualSingle* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSingle>(get_class());
        }
    } // namespace EqualInstruction_EqualSingle
} // namespace app::classes::types
