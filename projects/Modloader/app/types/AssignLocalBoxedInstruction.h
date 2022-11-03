#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssignLocalBoxedInstruction {
        inline app::AssignLocalBoxedInstruction__Class** type_info = (app::AssignLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04758AD0));
        inline app::AssignLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AssignLocalBoxedInstruction");
        }
        inline app::AssignLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::AssignLocalBoxedInstruction>(get_class());
        }
    } // namespace AssignLocalBoxedInstruction
} // namespace app::classes::types
