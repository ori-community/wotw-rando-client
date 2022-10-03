#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssignLocalBoxedInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssignLocalBoxedInstruction__Class** type_info;
        inline app::AssignLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AssignLocalBoxedInstruction");
        }
        inline app::AssignLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::AssignLocalBoxedInstruction>(get_class());
        }
    } // namespace AssignLocalBoxedInstruction
} // namespace app::classes::types
