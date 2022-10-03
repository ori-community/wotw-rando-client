#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayInstruction__Class** type_info;
        inline app::NewArrayInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayInstruction");
        }
        inline app::NewArrayInstruction* create() {
            return il2cpp::create_object<app::NewArrayInstruction>(get_class());
        }
    } // namespace NewArrayInstruction
} // namespace app::classes::types
