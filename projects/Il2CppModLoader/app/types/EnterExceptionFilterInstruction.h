#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterExceptionFilterInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterExceptionFilterInstruction__Class** type_info;
        inline app::EnterExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionFilterInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterExceptionFilterInstruction");
        }
        inline app::EnterExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionFilterInstruction>(get_class());
        }
    } // namespace EnterExceptionFilterInstruction
} // namespace app::classes::types
