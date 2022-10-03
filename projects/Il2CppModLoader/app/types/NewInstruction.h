#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewInstruction__Class** type_info;
        inline app::NewInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewInstruction");
        }
        inline app::NewInstruction* create() {
            return il2cpp::create_object<app::NewInstruction>(get_class());
        }
    } // namespace NewInstruction
} // namespace app::classes::types
