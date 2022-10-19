#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeAsInstruction {
        inline app::TypeAsInstruction__Class** type_info = (app::TypeAsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04740C88));
        inline app::TypeAsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeAsInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "TypeAsInstruction");
        }
        inline app::TypeAsInstruction* create() {
            return il2cpp::create_object<app::TypeAsInstruction>(get_class());
        }
    } // namespace TypeAsInstruction
} // namespace app::classes::types
