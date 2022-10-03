#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction_NotInt16__Class** type_info;
        inline app::NotInstruction_NotInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt16");
        }
        inline app::NotInstruction_NotInt16* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt16>(get_class());
        }
    } // namespace NotInstruction_NotInt16
} // namespace app::classes::types
