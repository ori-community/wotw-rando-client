#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterFaultInstruction__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterFaultInstruction__Array__Class** type_info;
        inline app::EnterFaultInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::EnterFaultInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFaultInstruction[]");
        }
        inline app::EnterFaultInstruction__Array* create() {
            return il2cpp::create_object<app::EnterFaultInstruction__Array>(get_class());
        }
    } // namespace EnterFaultInstruction__Array
} // namespace app::classes::types
