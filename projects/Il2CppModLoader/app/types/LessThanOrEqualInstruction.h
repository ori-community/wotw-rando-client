#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction__Class** type_info;
        inline app::LessThanOrEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::LessThanOrEqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction");
        }
        inline app::LessThanOrEqualInstruction* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction>(get_class());
        }
    } // namespace LessThanOrEqualInstruction
} // namespace app::classes::types
