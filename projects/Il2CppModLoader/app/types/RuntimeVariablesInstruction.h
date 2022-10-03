#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeVariablesInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeVariablesInstruction__Class** type_info;
        inline app::RuntimeVariablesInstruction__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariablesInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeVariablesInstruction");
        }
        inline app::RuntimeVariablesInstruction* create() {
            return il2cpp::create_object<app::RuntimeVariablesInstruction>(get_class());
        }
    } // namespace RuntimeVariablesInstruction
} // namespace app::classes::types
