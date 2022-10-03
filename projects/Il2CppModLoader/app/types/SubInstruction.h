#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubInstruction__Class** type_info;
        inline app::SubInstruction__Class* get_class() {
            return il2cpp::get_class<app::SubInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction");
        }
        inline app::SubInstruction* create() {
            return il2cpp::create_object<app::SubInstruction>(get_class());
        }
    } // namespace SubInstruction
} // namespace app::classes::types
