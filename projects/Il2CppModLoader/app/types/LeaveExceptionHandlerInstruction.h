#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaveExceptionHandlerInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaveExceptionHandlerInstruction__Class** type_info;
        inline app::LeaveExceptionHandlerInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionHandlerInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction");
        }
        inline app::LeaveExceptionHandlerInstruction* create() {
            return il2cpp::create_object<app::LeaveExceptionHandlerInstruction>(get_class());
        }
        inline app::LeaveExceptionHandlerInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaveExceptionHandlerInstruction__Array>(get_class(), size);
        }
    } // namespace LeaveExceptionHandlerInstruction
} // namespace app::classes::types
