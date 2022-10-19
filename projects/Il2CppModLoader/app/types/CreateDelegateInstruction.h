#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateDelegateInstruction {
        inline app::CreateDelegateInstruction__Class** type_info = (app::CreateDelegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04768940));
        inline app::CreateDelegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::CreateDelegateInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CreateDelegateInstruction");
        }
        inline app::CreateDelegateInstruction* create() {
            return il2cpp::create_object<app::CreateDelegateInstruction>(get_class());
        }
    } // namespace CreateDelegateInstruction
} // namespace app::classes::types
