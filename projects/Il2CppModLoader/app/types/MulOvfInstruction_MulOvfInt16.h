#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulOvfInstruction_MulOvfInt16__Class** type_info;
        inline app::MulOvfInstruction_MulOvfInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfInt16");
        }
        inline app::MulOvfInstruction_MulOvfInt16* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfInt16>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfInt16
} // namespace app::classes::types
