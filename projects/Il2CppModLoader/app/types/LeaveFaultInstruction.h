#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaveFaultInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaveFaultInstruction__Class** type_info;
        inline app::LeaveFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveFaultInstruction");
        }
        inline app::LeaveFaultInstruction* create() {
            return il2cpp::create_object<app::LeaveFaultInstruction>(get_class());
        }
    } // namespace LeaveFaultInstruction
} // namespace app::classes::types
