#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterExceptionHandlerInstruction {
        inline app::EnterExceptionHandlerInstruction__Class** type_info = (app::EnterExceptionHandlerInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F148));
        inline app::EnterExceptionHandlerInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionHandlerInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterExceptionHandlerInstruction");
        }
        inline app::EnterExceptionHandlerInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionHandlerInstruction>(get_class());
        }
    } // namespace EnterExceptionHandlerInstruction
} // namespace app::classes::types
