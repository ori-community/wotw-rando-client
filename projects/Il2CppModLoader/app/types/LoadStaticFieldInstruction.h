#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadStaticFieldInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadStaticFieldInstruction__Class** type_info;
        inline app::LoadStaticFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadStaticFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadStaticFieldInstruction");
        }
        inline app::LoadStaticFieldInstruction* create() {
            return il2cpp::create_object<app::LoadStaticFieldInstruction>(get_class());
        }
    } // namespace LoadStaticFieldInstruction
} // namespace app::classes::types
