#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuoteInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuoteInstruction__Class** type_info;
        inline app::QuoteInstruction__Class* get_class() {
            return il2cpp::get_class<app::QuoteInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "QuoteInstruction");
        }
        inline app::QuoteInstruction* create() {
            return il2cpp::create_object<app::QuoteInstruction>(get_class());
        }
    } // namespace QuoteInstruction
} // namespace app::classes::types
