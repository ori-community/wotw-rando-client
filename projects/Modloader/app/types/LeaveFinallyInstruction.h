#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaveFinallyInstruction__Class.h>
#include <Modloader/app/structs/LeaveFinallyInstruction.h>

namespace app::classes::types {
    namespace LeaveFinallyInstruction {
        inline app::LeaveFinallyInstruction__Class** type_info = (app::LeaveFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478BF08));
        inline app::LeaveFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveFinallyInstruction");
        }
        inline app::LeaveFinallyInstruction* create() {
            return il2cpp::create_object<app::LeaveFinallyInstruction>(get_class());
        }
    } // namespace LeaveFinallyInstruction
} // namespace app::classes::types
