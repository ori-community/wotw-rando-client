#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaveExceptionHandlerInstruction__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaveExceptionHandlerInstruction__Array__Class** type_info;
        inline app::LeaveExceptionHandlerInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionHandlerInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction[]");
        }
        inline app::LeaveExceptionHandlerInstruction__Array* create() {
            return il2cpp::create_object<app::LeaveExceptionHandlerInstruction__Array>(get_class());
        }
    } // namespace LeaveExceptionHandlerInstruction__Array
} // namespace app::classes::types
