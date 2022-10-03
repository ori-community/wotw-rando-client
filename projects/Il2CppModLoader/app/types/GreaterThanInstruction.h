#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction__Class** type_info;
        inline app::GreaterThanInstruction__Class* get_class() {
            return il2cpp::get_class<app::GreaterThanInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction");
        }
        inline app::GreaterThanInstruction* create() {
            return il2cpp::create_object<app::GreaterThanInstruction>(get_class());
        }
    } // namespace GreaterThanInstruction
} // namespace app::classes::types
