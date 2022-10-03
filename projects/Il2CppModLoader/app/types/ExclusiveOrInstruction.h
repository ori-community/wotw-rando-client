#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveOrInstruction__Class** type_info;
        inline app::ExclusiveOrInstruction__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveOrInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction");
        }
        inline app::ExclusiveOrInstruction* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction>(get_class());
        }
    } // namespace ExclusiveOrInstruction
} // namespace app::classes::types
