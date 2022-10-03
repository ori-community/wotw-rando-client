#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction__Class** type_info;
        inline app::AndInstruction__Class* get_class() {
            return il2cpp::get_class<app::AndInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction");
        }
        inline app::AndInstruction* create() {
            return il2cpp::create_object<app::AndInstruction>(get_class());
        }
    } // namespace AndInstruction
} // namespace app::classes::types
