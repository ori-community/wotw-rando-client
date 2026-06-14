#pragma once
#include <Modloader/app/structs/BranchTrueInstruction.h>
#include <Modloader/app/structs/BranchTrueInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BranchTrueInstruction {
        inline app::BranchTrueInstruction__Class** type_info() {
            static app::BranchTrueInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BranchTrueInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471E0A0));
            }
            return cache;
        }
        inline app::BranchTrueInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchTrueInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "BranchTrueInstruction");
        }
        inline app::BranchTrueInstruction* create() {
            return il2cpp::create_object<app::BranchTrueInstruction>(get_class());
        }
    } // namespace BranchTrueInstruction
} // namespace app::classes::types
