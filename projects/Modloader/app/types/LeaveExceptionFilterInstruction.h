#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaveExceptionFilterInstruction {
        inline app::LeaveExceptionFilterInstruction__Class** type_info = (app::LeaveExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x0473A900));
        inline app::LeaveExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionFilterInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionFilterInstruction");
        }
        inline app::LeaveExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::LeaveExceptionFilterInstruction>(get_class());
        }
    } // namespace LeaveExceptionFilterInstruction
} // namespace app::classes::types
