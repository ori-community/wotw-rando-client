#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ThrowInstruction {
        inline app::ThrowInstruction__Class** type_info = (app::ThrowInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476FE30));
        inline app::ThrowInstruction__Class* get_class() {
            return il2cpp::get_class<app::ThrowInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ThrowInstruction");
        }
        inline app::ThrowInstruction* create() {
            return il2cpp::create_object<app::ThrowInstruction>(get_class());
        }
    } // namespace ThrowInstruction
} // namespace app::classes::types
