#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayInitInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayInitInstruction__Class** type_info;
        inline app::NewArrayInitInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInitInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayInitInstruction");
        }
        inline app::NewArrayInitInstruction* create() {
            return il2cpp::create_object<app::NewArrayInitInstruction>(get_class());
        }
    } // namespace NewArrayInitInstruction
} // namespace app::classes::types
