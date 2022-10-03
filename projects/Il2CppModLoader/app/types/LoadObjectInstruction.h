#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadObjectInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadObjectInstruction__Class** type_info;
        inline app::LoadObjectInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadObjectInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadObjectInstruction");
        }
        inline app::LoadObjectInstruction* create() {
            return il2cpp::create_object<app::LoadObjectInstruction>(get_class());
        }
    } // namespace LoadObjectInstruction
} // namespace app::classes::types
