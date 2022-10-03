#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction__Class** type_info;
        inline app::IncrementInstruction__Class* get_class() {
            return il2cpp::get_class<app::IncrementInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction");
        }
        inline app::IncrementInstruction* create() {
            return il2cpp::create_object<app::IncrementInstruction>(get_class());
        }
    } // namespace IncrementInstruction
} // namespace app::classes::types
