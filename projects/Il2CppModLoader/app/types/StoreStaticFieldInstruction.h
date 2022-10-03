#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreStaticFieldInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StoreStaticFieldInstruction__Class** type_info;
        inline app::StoreStaticFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreStaticFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreStaticFieldInstruction");
        }
        inline app::StoreStaticFieldInstruction* create() {
            return il2cpp::create_object<app::StoreStaticFieldInstruction>(get_class());
        }
    } // namespace StoreStaticFieldInstruction
} // namespace app::classes::types
