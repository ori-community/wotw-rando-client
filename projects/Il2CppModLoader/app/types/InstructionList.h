#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstructionList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstructionList__Class** type_info;
        inline app::InstructionList__Class* get_class() {
            return il2cpp::get_class<app::InstructionList__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionList");
        }
        inline app::InstructionList* create() {
            return il2cpp::create_object<app::InstructionList>(get_class());
        }
    } // namespace InstructionList
} // namespace app::classes::types
