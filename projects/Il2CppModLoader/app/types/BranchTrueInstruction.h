#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BranchTrueInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BranchTrueInstruction__Class** type_info;
        inline app::BranchTrueInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchTrueInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchTrueInstruction");
        }
        inline app::BranchTrueInstruction* create() {
            return il2cpp::create_object<app::BranchTrueInstruction>(get_class());
        }
    } // namespace BranchTrueInstruction
} // namespace app::classes::types
