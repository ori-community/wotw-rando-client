#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadFieldInstruction {
        inline app::LoadFieldInstruction__Class** type_info = (app::LoadFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778A70));
        inline app::LoadFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadFieldInstruction");
        }
        inline app::LoadFieldInstruction* create() {
            return il2cpp::create_object<app::LoadFieldInstruction>(get_class());
        }
    } // namespace LoadFieldInstruction
} // namespace app::classes::types
