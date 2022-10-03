#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModuloInstruction_ModuloDouble__Class** type_info;
        inline app::ModuloInstruction_ModuloDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloDouble");
        }
        inline app::ModuloInstruction_ModuloDouble* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloDouble>(get_class());
        }
    } // namespace ModuloInstruction_ModuloDouble
} // namespace app::classes::types
