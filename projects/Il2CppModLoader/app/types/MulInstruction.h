#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulInstruction__Class** type_info;
        inline app::MulInstruction__Class* get_class() {
            return il2cpp::get_class<app::MulInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction");
        }
        inline app::MulInstruction* create() {
            return il2cpp::create_object<app::MulInstruction>(get_class());
        }
    } // namespace MulInstruction
} // namespace app::classes::types
