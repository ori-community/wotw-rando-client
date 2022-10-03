#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModuloInstruction__Class** type_info;
        inline app::ModuloInstruction__Class* get_class() {
            return il2cpp::get_class<app::ModuloInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction");
        }
        inline app::ModuloInstruction* create() {
            return il2cpp::create_object<app::ModuloInstruction>(get_class());
        }
    } // namespace ModuloInstruction
} // namespace app::classes::types
