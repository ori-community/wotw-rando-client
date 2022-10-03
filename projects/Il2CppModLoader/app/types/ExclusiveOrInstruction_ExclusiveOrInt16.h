#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveOrInstruction_ExclusiveOrInt16__Class** type_info;
        inline app::ExclusiveOrInstruction_ExclusiveOrInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt16");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt16* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt16>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt16
} // namespace app::classes::types
