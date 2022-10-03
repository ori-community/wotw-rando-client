#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DupInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DupInstruction__Class** type_info;
        inline app::DupInstruction__Class* get_class() {
            return il2cpp::get_class<app::DupInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DupInstruction");
        }
        inline app::DupInstruction* create() {
            return il2cpp::create_object<app::DupInstruction>(get_class());
        }
    } // namespace DupInstruction
} // namespace app::classes::types
