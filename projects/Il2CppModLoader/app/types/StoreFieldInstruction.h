#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreFieldInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StoreFieldInstruction__Class** type_info;
        inline app::StoreFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreFieldInstruction");
        }
        inline app::StoreFieldInstruction* create() {
            return il2cpp::create_object<app::StoreFieldInstruction>(get_class());
        }
    } // namespace StoreFieldInstruction
} // namespace app::classes::types
