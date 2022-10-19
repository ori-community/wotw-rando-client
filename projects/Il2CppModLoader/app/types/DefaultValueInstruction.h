#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultValueInstruction {
        inline app::DefaultValueInstruction__Class** type_info = (app::DefaultValueInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722350));
        inline app::DefaultValueInstruction__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DefaultValueInstruction");
        }
        inline app::DefaultValueInstruction* create() {
            return il2cpp::create_object<app::DefaultValueInstruction>(get_class());
        }
    } // namespace DefaultValueInstruction
} // namespace app::classes::types
