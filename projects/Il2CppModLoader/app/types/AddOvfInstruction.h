#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOvfInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOvfInstruction__Class** type_info;
        inline app::AddOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::AddOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction");
        }
        inline app::AddOvfInstruction* create() {
            return il2cpp::create_object<app::AddOvfInstruction>(get_class());
        }
    } // namespace AddOvfInstruction
} // namespace app::classes::types
