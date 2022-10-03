#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThrowInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThrowInstruction__Class** type_info;
        inline app::ThrowInstruction__Class* get_class() {
            return il2cpp::get_class<app::ThrowInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ThrowInstruction");
        }
        inline app::ThrowInstruction* create() {
            return il2cpp::create_object<app::ThrowInstruction>(get_class());
        }
    } // namespace ThrowInstruction
} // namespace app::classes::types
