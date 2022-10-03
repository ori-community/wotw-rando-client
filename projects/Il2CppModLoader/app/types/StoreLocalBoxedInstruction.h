#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreLocalBoxedInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StoreLocalBoxedInstruction__Class** type_info;
        inline app::StoreLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreLocalBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreLocalBoxedInstruction");
        }
        inline app::StoreLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::StoreLocalBoxedInstruction>(get_class());
        }
    } // namespace StoreLocalBoxedInstruction
} // namespace app::classes::types
