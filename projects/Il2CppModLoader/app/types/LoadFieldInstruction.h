#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadFieldInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadFieldInstruction__Class** type_info;
        inline app::LoadFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadFieldInstruction");
        }
        inline app::LoadFieldInstruction* create() {
            return il2cpp::create_object<app::LoadFieldInstruction>(get_class());
        }
    } // namespace LoadFieldInstruction
} // namespace app::classes::types
