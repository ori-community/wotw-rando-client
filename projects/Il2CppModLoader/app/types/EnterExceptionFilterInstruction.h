#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterExceptionFilterInstruction {
        inline app::EnterExceptionFilterInstruction__Class** type_info = (app::EnterExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x047543C8));
        inline app::EnterExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionFilterInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterExceptionFilterInstruction");
        }
        inline app::EnterExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionFilterInstruction>(get_class());
        }
    } // namespace EnterExceptionFilterInstruction
} // namespace app::classes::types
