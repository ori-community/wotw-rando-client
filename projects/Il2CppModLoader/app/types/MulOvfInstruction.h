#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulOvfInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulOvfInstruction__Class** type_info;
        inline app::MulOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::MulOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction");
        }
        inline app::MulOvfInstruction* create() {
            return il2cpp::create_object<app::MulOvfInstruction>(get_class());
        }
    } // namespace MulOvfInstruction
} // namespace app::classes::types
