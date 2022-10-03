#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubOvfInstruction__Class** type_info;
        inline app::SubOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::SubOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubOvfInstruction");
        }
        inline app::SubOvfInstruction* create() {
            return il2cpp::create_object<app::SubOvfInstruction>(get_class());
        }
    } // namespace SubOvfInstruction
} // namespace app::classes::types
