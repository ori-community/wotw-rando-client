#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullCheckInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullCheckInstruction__Class** type_info;
        inline app::NullCheckInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullCheckInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullCheckInstruction");
        }
        inline app::NullCheckInstruction* create() {
            return il2cpp::create_object<app::NullCheckInstruction>(get_class());
        }
    } // namespace NullCheckInstruction
} // namespace app::classes::types
