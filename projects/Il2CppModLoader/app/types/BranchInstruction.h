#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BranchInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BranchInstruction__Class** type_info;
        inline app::BranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchInstruction");
        }
        inline app::BranchInstruction* create() {
            return il2cpp::create_object<app::BranchInstruction>(get_class());
        }
    } // namespace BranchInstruction
} // namespace app::classes::types
