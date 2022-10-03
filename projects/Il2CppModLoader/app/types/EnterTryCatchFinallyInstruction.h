#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterTryCatchFinallyInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterTryCatchFinallyInstruction__Class** type_info;
        inline app::EnterTryCatchFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryCatchFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterTryCatchFinallyInstruction");
        }
        inline app::EnterTryCatchFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterTryCatchFinallyInstruction>(get_class());
        }
    } // namespace EnterTryCatchFinallyInstruction
} // namespace app::classes::types
