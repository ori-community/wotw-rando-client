#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateInstruction__Class** type_info;
        inline app::NegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::NegateInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction");
        }
        inline app::NegateInstruction* create() {
            return il2cpp::create_object<app::NegateInstruction>(get_class());
        }
    } // namespace NegateInstruction
} // namespace app::classes::types
