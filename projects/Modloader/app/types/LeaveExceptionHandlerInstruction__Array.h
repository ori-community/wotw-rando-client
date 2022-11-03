#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaveExceptionHandlerInstruction__Array {
        inline app::LeaveExceptionHandlerInstruction__Array__Class** type_info = (app::LeaveExceptionHandlerInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x04765188));
        inline app::LeaveExceptionHandlerInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionHandlerInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction[]");
        }
        inline app::LeaveExceptionHandlerInstruction__Array* create() {
            return il2cpp::create_object<app::LeaveExceptionHandlerInstruction__Array>(get_class());
        }
    } // namespace LeaveExceptionHandlerInstruction__Array
} // namespace app::classes::types
