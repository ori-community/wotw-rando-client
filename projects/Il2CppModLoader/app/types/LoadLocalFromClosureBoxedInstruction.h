#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadLocalFromClosureBoxedInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadLocalFromClosureBoxedInstruction__Class** type_info;
        inline app::LoadLocalFromClosureBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalFromClosureBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalFromClosureBoxedInstruction");
        }
        inline app::LoadLocalFromClosureBoxedInstruction* create() {
            return il2cpp::create_object<app::LoadLocalFromClosureBoxedInstruction>(get_class());
        }
    } // namespace LoadLocalFromClosureBoxedInstruction
} // namespace app::classes::types
