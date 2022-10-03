#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringSwitchInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringSwitchInstruction__Class** type_info;
        inline app::StringSwitchInstruction__Class* get_class() {
            return il2cpp::get_class<app::StringSwitchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StringSwitchInstruction");
        }
        inline app::StringSwitchInstruction* create() {
            return il2cpp::create_object<app::StringSwitchInstruction>(get_class());
        }
    } // namespace StringSwitchInstruction
} // namespace app::classes::types
