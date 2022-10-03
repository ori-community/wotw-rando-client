#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadLocalInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadLocalInstruction__Class** type_info;
        inline app::LoadLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalInstruction");
        }
        inline app::LoadLocalInstruction* create() {
            return il2cpp::create_object<app::LoadLocalInstruction>(get_class());
        }
    } // namespace LoadLocalInstruction
} // namespace app::classes::types
