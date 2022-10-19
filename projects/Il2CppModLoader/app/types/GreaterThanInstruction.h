#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction {
        inline app::GreaterThanInstruction__Class** type_info = (app::GreaterThanInstruction__Class**)(modloader::win::memory::resolve_rva(0x04796680));
        inline app::GreaterThanInstruction__Class* get_class() {
            return il2cpp::get_class<app::GreaterThanInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction");
        }
        inline app::GreaterThanInstruction* create() {
            return il2cpp::create_object<app::GreaterThanInstruction>(get_class());
        }
    } // namespace GreaterThanInstruction
} // namespace app::classes::types
