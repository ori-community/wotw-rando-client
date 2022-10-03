#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodInfoCallInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodInfoCallInstruction__Class** type_info;
        inline app::MethodInfoCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::MethodInfoCallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "MethodInfoCallInstruction");
        }
        inline app::MethodInfoCallInstruction* create() {
            return il2cpp::create_object<app::MethodInfoCallInstruction>(get_class());
        }
    } // namespace MethodInfoCallInstruction
} // namespace app::classes::types
