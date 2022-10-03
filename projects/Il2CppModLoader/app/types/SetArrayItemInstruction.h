#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetArrayItemInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetArrayItemInstruction__Class** type_info;
        inline app::SetArrayItemInstruction__Class* get_class() {
            return il2cpp::get_class<app::SetArrayItemInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SetArrayItemInstruction");
        }
        inline app::SetArrayItemInstruction* create() {
            return il2cpp::create_object<app::SetArrayItemInstruction>(get_class());
        }
    } // namespace SetArrayItemInstruction
} // namespace app::classes::types
