#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CoalescingBranchInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CoalescingBranchInstruction__Class** type_info;
        inline app::CoalescingBranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::CoalescingBranchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CoalescingBranchInstruction");
        }
        inline app::CoalescingBranchInstruction* create() {
            return il2cpp::create_object<app::CoalescingBranchInstruction>(get_class());
        }
    } // namespace CoalescingBranchInstruction
} // namespace app::classes::types
