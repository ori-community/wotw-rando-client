#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterFaultInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterFaultInstruction__Class** type_info;
        inline app::EnterFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFaultInstruction");
        }
        inline app::EnterFaultInstruction* create() {
            return il2cpp::create_object<app::EnterFaultInstruction>(get_class());
        }
        inline app::EnterFaultInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::EnterFaultInstruction__Array>(get_class(), size);
        }
    } // namespace EnterFaultInstruction
} // namespace app::classes::types
