#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaveExceptionHandlerInstruction {
        inline app::LeaveExceptionHandlerInstruction__Class** type_info = (app::LeaveExceptionHandlerInstruction__Class**)(modloader::win::memory::resolve_rva(0x0477FBD0));
        inline app::LeaveExceptionHandlerInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionHandlerInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction");
        }
        inline app::LeaveExceptionHandlerInstruction* create() {
            return il2cpp::create_object<app::LeaveExceptionHandlerInstruction>(get_class());
        }
        inline app::LeaveExceptionHandlerInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaveExceptionHandlerInstruction__Array>(get_class(), size);
        }
        inline app::LeaveExceptionHandlerInstruction__Array* create_array(const std::vector<app::LeaveExceptionHandlerInstruction*>& items) {
            return il2cpp::array_new<app::LeaveExceptionHandlerInstruction__Array>(get_class(), items);
        }
    } // namespace LeaveExceptionHandlerInstruction
} // namespace app::classes::types
