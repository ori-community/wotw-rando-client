#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction__Class** type_info;
        inline app::NotEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::NotEqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction");
        }
        inline app::NotEqualInstruction* create() {
            return il2cpp::create_object<app::NotEqualInstruction>(get_class());
        }
    } // namespace NotEqualInstruction
} // namespace app::classes::types
