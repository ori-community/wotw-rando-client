#pragma once
#include <Modloader/app/structs/BranchFalseInstruction.h>
#include <Modloader/app/structs/BranchFalseInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BranchFalseInstruction {
        inline app::BranchFalseInstruction__Class** type_info() {
            static app::BranchFalseInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BranchFalseInstruction__Class**)(modloader::win::memory::resolve_rva(0x04799450));
            }
            return cache;
        }
        inline app::BranchFalseInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchFalseInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "BranchFalseInstruction");
        }
        inline app::BranchFalseInstruction* create() {
            return il2cpp::create_object<app::BranchFalseInstruction>(get_class());
        }
    } // namespace BranchFalseInstruction
} // namespace app::classes::types
