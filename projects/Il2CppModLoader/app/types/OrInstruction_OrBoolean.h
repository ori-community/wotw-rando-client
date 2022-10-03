#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrInstruction_OrBoolean__Class** type_info;
        inline app::OrInstruction_OrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrBoolean");
        }
        inline app::OrInstruction_OrBoolean* create() {
            return il2cpp::create_object<app::OrInstruction_OrBoolean>(get_class());
        }
    } // namespace OrInstruction_OrBoolean
} // namespace app::classes::types
