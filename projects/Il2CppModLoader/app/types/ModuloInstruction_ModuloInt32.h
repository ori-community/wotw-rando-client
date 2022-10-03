#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModuloInstruction_ModuloInt32__Class** type_info;
        inline app::ModuloInstruction_ModuloInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloInt32");
        }
        inline app::ModuloInstruction_ModuloInt32* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloInt32>(get_class());
        }
    } // namespace ModuloInstruction_ModuloInt32
} // namespace app::classes::types
