#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftShiftInstruction__Class** type_info;
        inline app::LeftShiftInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeftShiftInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction");
        }
        inline app::LeftShiftInstruction* create() {
            return il2cpp::create_object<app::LeftShiftInstruction>(get_class());
        }
    } // namespace LeftShiftInstruction
} // namespace app::classes::types
