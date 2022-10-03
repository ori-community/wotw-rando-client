#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByRefNewInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByRefNewInstruction__Class** type_info;
        inline app::ByRefNewInstruction__Class* get_class() {
            return il2cpp::get_class<app::ByRefNewInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefNewInstruction");
        }
        inline app::ByRefNewInstruction* create() {
            return il2cpp::create_object<app::ByRefNewInstruction>(get_class());
        }
    } // namespace ByRefNewInstruction
} // namespace app::classes::types
