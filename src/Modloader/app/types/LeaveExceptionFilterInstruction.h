#pragma once
#include <Modloader/app/structs/LeaveExceptionFilterInstruction.h>
#include <Modloader/app/structs/LeaveExceptionFilterInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaveExceptionFilterInstruction {
        inline app::LeaveExceptionFilterInstruction__Class** type_info() {
            static app::LeaveExceptionFilterInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaveExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x0473A900));
            }
            return cache;
        }
        inline app::LeaveExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionFilterInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeaveExceptionFilterInstruction");
        }
        inline app::LeaveExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::LeaveExceptionFilterInstruction>(get_class());
        }
    } // namespace LeaveExceptionFilterInstruction
} // namespace app::classes::types
