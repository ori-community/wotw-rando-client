#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterFinallyInstruction__Array__Class** type_info;
        inline app::EnterFinallyInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction[]");
        }
        inline app::EnterFinallyInstruction__Array* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction__Array>(get_class());
        }
    } // namespace EnterFinallyInstruction__Array
} // namespace app::classes::types
