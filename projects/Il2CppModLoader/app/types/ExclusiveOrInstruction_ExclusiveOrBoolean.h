#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class** type_info;
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrBoolean");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrBoolean>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrBoolean
} // namespace app::classes::types
