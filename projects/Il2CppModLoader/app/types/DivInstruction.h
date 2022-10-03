#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DivInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DivInstruction__Class** type_info;
        inline app::DivInstruction__Class* get_class() {
            return il2cpp::get_class<app::DivInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction");
        }
        inline app::DivInstruction* create() {
            return il2cpp::create_object<app::DivInstruction>(get_class());
        }
    } // namespace DivInstruction
} // namespace app::classes::types
