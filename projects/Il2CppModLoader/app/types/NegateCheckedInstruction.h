#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateCheckedInstruction__Class** type_info;
        inline app::NegateCheckedInstruction__Class* get_class() {
            return il2cpp::get_class<app::NegateCheckedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction");
        }
        inline app::NegateCheckedInstruction* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction>(get_class());
        }
    } // namespace NegateCheckedInstruction
} // namespace app::classes::types
