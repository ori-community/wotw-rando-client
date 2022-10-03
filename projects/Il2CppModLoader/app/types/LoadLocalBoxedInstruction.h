#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadLocalBoxedInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadLocalBoxedInstruction__Class** type_info;
        inline app::LoadLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalBoxedInstruction");
        }
        inline app::LoadLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::LoadLocalBoxedInstruction>(get_class());
        }
    } // namespace LoadLocalBoxedInstruction
} // namespace app::classes::types
