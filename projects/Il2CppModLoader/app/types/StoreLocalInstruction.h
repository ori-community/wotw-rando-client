#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreLocalInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StoreLocalInstruction__Class** type_info;
        inline app::StoreLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreLocalInstruction");
        }
        inline app::StoreLocalInstruction* create() {
            return il2cpp::create_object<app::StoreLocalInstruction>(get_class());
        }
    } // namespace StoreLocalInstruction
} // namespace app::classes::types
