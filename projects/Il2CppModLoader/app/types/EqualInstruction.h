#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction__Class** type_info;
        inline app::EqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::EqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction");
        }
        inline app::EqualInstruction* create() {
            return il2cpp::create_object<app::EqualInstruction>(get_class());
        }
    } // namespace EqualInstruction
} // namespace app::classes::types
