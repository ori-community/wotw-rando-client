#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaveFinallyInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaveFinallyInstruction__Class** type_info;
        inline app::LeaveFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveFinallyInstruction");
        }
        inline app::LeaveFinallyInstruction* create() {
            return il2cpp::create_object<app::LeaveFinallyInstruction>(get_class());
        }
    } // namespace LeaveFinallyInstruction
} // namespace app::classes::types
