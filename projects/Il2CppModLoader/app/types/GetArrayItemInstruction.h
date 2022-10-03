#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetArrayItemInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetArrayItemInstruction__Class** type_info;
        inline app::GetArrayItemInstruction__Class* get_class() {
            return il2cpp::get_class<app::GetArrayItemInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GetArrayItemInstruction");
        }
        inline app::GetArrayItemInstruction* create() {
            return il2cpp::create_object<app::GetArrayItemInstruction>(get_class());
        }
    } // namespace GetArrayItemInstruction
} // namespace app::classes::types
