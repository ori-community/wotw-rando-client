#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultValueInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultValueInstruction__Class** type_info;
        inline app::DefaultValueInstruction__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DefaultValueInstruction");
        }
        inline app::DefaultValueInstruction* create() {
            return il2cpp::create_object<app::DefaultValueInstruction>(get_class());
        }
    } // namespace DefaultValueInstruction
} // namespace app::classes::types
