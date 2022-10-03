#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssignLocalInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssignLocalInstruction__Class** type_info;
        inline app::AssignLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AssignLocalInstruction");
        }
        inline app::AssignLocalInstruction* create() {
            return il2cpp::create_object<app::AssignLocalInstruction>(get_class());
        }
    } // namespace AssignLocalInstruction
} // namespace app::classes::types
