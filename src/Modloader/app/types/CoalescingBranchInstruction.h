#pragma once
#include <Modloader/app/structs/CoalescingBranchInstruction.h>
#include <Modloader/app/structs/CoalescingBranchInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CoalescingBranchInstruction {
        inline app::CoalescingBranchInstruction__Class** type_info() {
            static app::CoalescingBranchInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CoalescingBranchInstruction__Class**)(modloader::win::memory::resolve_rva(0x047412C0));
            }
            return cache;
        }
        inline app::CoalescingBranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::CoalescingBranchInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CoalescingBranchInstruction");
        }
        inline app::CoalescingBranchInstruction* create() {
            return il2cpp::create_object<app::CoalescingBranchInstruction>(get_class());
        }
    } // namespace CoalescingBranchInstruction
} // namespace app::classes::types
