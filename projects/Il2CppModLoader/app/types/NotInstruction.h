#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction__Class** type_info;
        inline app::NotInstruction__Class* get_class() {
            return il2cpp::get_class<app::NotInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction");
        }
        inline app::NotInstruction* create() {
            return il2cpp::create_object<app::NotInstruction>(get_class());
        }
    } // namespace NotInstruction
} // namespace app::classes::types
