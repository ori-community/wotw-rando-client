#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction__Class** type_info;
        inline app::AddInstruction__Class* get_class() {
            return il2cpp::get_class<app::AddInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction");
        }
        inline app::AddInstruction* create() {
            return il2cpp::create_object<app::AddInstruction>(get_class());
        }
    } // namespace AddInstruction
} // namespace app::classes::types
