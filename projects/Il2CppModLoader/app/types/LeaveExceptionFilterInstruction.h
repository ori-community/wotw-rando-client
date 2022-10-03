#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaveExceptionFilterInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaveExceptionFilterInstruction__Class** type_info;
        inline app::LeaveExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveExceptionFilterInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveExceptionFilterInstruction");
        }
        inline app::LeaveExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::LeaveExceptionFilterInstruction>(get_class());
        }
    } // namespace LeaveExceptionFilterInstruction
} // namespace app::classes::types
