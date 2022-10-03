#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GotoInstruction__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GotoInstruction__Array__Class** type_info;
        inline app::GotoInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::GotoInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "GotoInstruction[]");
        }
        inline app::GotoInstruction__Array* create() {
            return il2cpp::create_object<app::GotoInstruction__Array>(get_class());
        }
    } // namespace GotoInstruction__Array
} // namespace app::classes::types
