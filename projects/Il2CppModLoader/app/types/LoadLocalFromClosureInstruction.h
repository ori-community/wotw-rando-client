#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadLocalFromClosureInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadLocalFromClosureInstruction__Class** type_info;
        inline app::LoadLocalFromClosureInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalFromClosureInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalFromClosureInstruction");
        }
        inline app::LoadLocalFromClosureInstruction* create() {
            return il2cpp::create_object<app::LoadLocalFromClosureInstruction>(get_class());
        }
    } // namespace LoadLocalFromClosureInstruction
} // namespace app::classes::types
