#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GotoInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GotoInstruction__Class** type_info;
        inline app::GotoInstruction__Class* get_class() {
            return il2cpp::get_class<app::GotoInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GotoInstruction");
        }
        inline app::GotoInstruction* create() {
            return il2cpp::create_object<app::GotoInstruction>(get_class());
        }
        inline app::GotoInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::GotoInstruction__Array>(get_class(), size);
        }
    } // namespace GotoInstruction
} // namespace app::classes::types
