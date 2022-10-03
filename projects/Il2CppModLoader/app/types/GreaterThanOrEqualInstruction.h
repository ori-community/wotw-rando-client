#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanOrEqualInstruction__Class** type_info;
        inline app::GreaterThanOrEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::GreaterThanOrEqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction");
        }
        inline app::GreaterThanOrEqualInstruction* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction
} // namespace app::classes::types
