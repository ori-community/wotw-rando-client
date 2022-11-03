#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssignLocalInstruction {
        inline app::AssignLocalInstruction__Class** type_info = (app::AssignLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x04750D30));
        inline app::AssignLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AssignLocalInstruction");
        }
        inline app::AssignLocalInstruction* create() {
            return il2cpp::create_object<app::AssignLocalInstruction>(get_class());
        }
    } // namespace AssignLocalInstruction
} // namespace app::classes::types
