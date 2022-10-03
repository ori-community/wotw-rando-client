#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateDelegateInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateDelegateInstruction__Class** type_info;
        inline app::CreateDelegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::CreateDelegateInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CreateDelegateInstruction");
        }
        inline app::CreateDelegateInstruction* create() {
            return il2cpp::create_object<app::CreateDelegateInstruction>(get_class());
        }
    } // namespace CreateDelegateInstruction
} // namespace app::classes::types
