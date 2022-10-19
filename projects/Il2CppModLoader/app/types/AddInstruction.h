#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddInstruction {
        inline app::AddInstruction__Class** type_info = (app::AddInstruction__Class**)(modloader::win::memory::resolve_rva(0x04794DC8));
        inline app::AddInstruction__Class* get_class() {
            return il2cpp::get_class<app::AddInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction");
        }
        inline app::AddInstruction* create() {
            return il2cpp::create_object<app::AddInstruction>(get_class());
        }
    } // namespace AddInstruction
} // namespace app::classes::types
