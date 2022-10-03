#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayLengthInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayLengthInstruction__Class** type_info;
        inline app::ArrayLengthInstruction__Class* get_class() {
            return il2cpp::get_class<app::ArrayLengthInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ArrayLengthInstruction");
        }
        inline app::ArrayLengthInstruction* create() {
            return il2cpp::create_object<app::ArrayLengthInstruction>(get_class());
        }
    } // namespace ArrayLengthInstruction
} // namespace app::classes::types
