#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterExceptionHandlerInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterExceptionHandlerInstruction__Class** type_info;
        inline app::EnterExceptionHandlerInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionHandlerInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterExceptionHandlerInstruction");
        }
        inline app::EnterExceptionHandlerInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionHandlerInstruction>(get_class());
        }
    } // namespace EnterExceptionHandlerInstruction
} // namespace app::classes::types
