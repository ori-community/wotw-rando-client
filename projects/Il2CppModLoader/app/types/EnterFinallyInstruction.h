#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterFinallyInstruction__Class** type_info;
        inline app::EnterFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction");
        }
        inline app::EnterFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction>(get_class());
        }
        inline app::EnterFinallyInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::EnterFinallyInstruction__Array>(get_class(), size);
        }
    } // namespace EnterFinallyInstruction
} // namespace app::classes::types
