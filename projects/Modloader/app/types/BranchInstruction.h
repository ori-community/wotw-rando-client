#pragma once
#include <Modloader/app/structs/BranchInstruction.h>
#include <Modloader/app/structs/BranchInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BranchInstruction {
        inline app::BranchInstruction__Class** type_info() {
            static app::BranchInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BranchInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722600));
            }
            return cache;
        }
        inline app::BranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "BranchInstruction");
        }
        inline app::BranchInstruction* create() {
            return il2cpp::create_object<app::BranchInstruction>(get_class());
        }
    } // namespace BranchInstruction
} // namespace app::classes::types
