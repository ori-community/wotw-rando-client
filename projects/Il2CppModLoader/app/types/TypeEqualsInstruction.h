#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeEqualsInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeEqualsInstruction__Class** type_info;
        inline app::TypeEqualsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeEqualsInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "TypeEqualsInstruction");
        }
        inline app::TypeEqualsInstruction* create() {
            return il2cpp::create_object<app::TypeEqualsInstruction>(get_class());
        }
    } // namespace TypeEqualsInstruction
} // namespace app::classes::types
