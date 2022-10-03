#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterTryFaultInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterTryFaultInstruction__Class** type_info;
        inline app::EnterTryFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterTryFaultInstruction");
        }
        inline app::EnterTryFaultInstruction* create() {
            return il2cpp::create_object<app::EnterTryFaultInstruction>(get_class());
        }
    } // namespace EnterTryFaultInstruction
} // namespace app::classes::types
