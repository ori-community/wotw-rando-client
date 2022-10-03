#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecrementInstruction__Class** type_info;
        inline app::DecrementInstruction__Class* get_class() {
            return il2cpp::get_class<app::DecrementInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction");
        }
        inline app::DecrementInstruction* create() {
            return il2cpp::create_object<app::DecrementInstruction>(get_class());
        }
    } // namespace DecrementInstruction
} // namespace app::classes::types
