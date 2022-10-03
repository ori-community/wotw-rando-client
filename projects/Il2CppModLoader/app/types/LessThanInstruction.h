#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction__Class** type_info;
        inline app::LessThanInstruction__Class* get_class() {
            return il2cpp::get_class<app::LessThanInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction");
        }
        inline app::LessThanInstruction* create() {
            return il2cpp::create_object<app::LessThanInstruction>(get_class());
        }
    } // namespace LessThanInstruction
} // namespace app::classes::types
