#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction__Array {
        inline app::EnterFinallyInstruction__Array__Class** type_info = (app::EnterFinallyInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x0478A0B8));
        inline app::EnterFinallyInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction[]");
        }
        inline app::EnterFinallyInstruction__Array* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction__Array>(get_class());
        }
    } // namespace EnterFinallyInstruction__Array
} // namespace app::classes::types
