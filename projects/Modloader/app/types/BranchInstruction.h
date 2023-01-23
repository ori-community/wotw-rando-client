#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BranchInstruction__Class.h>
#include <Modloader/app/structs/BranchInstruction.h>

namespace app::classes::types {
    namespace BranchInstruction {
        inline app::BranchInstruction__Class** type_info = (app::BranchInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722600));
        inline app::BranchInstruction__Class* get_class() {
            return il2cpp::get_class<app::BranchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "BranchInstruction");
        }
        inline app::BranchInstruction* create() {
            return il2cpp::create_object<app::BranchInstruction>(get_class());
        }
    } // namespace BranchInstruction
} // namespace app::classes::types
