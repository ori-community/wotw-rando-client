#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BranchFalseInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BranchFalseInstruction__Class** type_info;
        inline app::BranchFalseInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchFalseInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchFalseInstruction");
        }
        inline app::BranchFalseInstruction* create() {
            return il2cpp::create_object<app::BranchFalseInstruction>(get_class());
        }
    } // namespace BranchFalseInstruction
} // namespace app::classes::types
