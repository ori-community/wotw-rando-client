#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModuloInstruction_ModuloSingle__Class** type_info;
        inline app::ModuloInstruction_ModuloSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloSingle");
        }
        inline app::ModuloInstruction_ModuloSingle* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloSingle>(get_class());
        }
    } // namespace ModuloInstruction_ModuloSingle
} // namespace app::classes::types
