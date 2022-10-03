#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualUInt16__Class** type_info;
        inline app::EqualInstruction_EqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt16");
        }
        inline app::EqualInstruction_EqualUInt16* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt16>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt16
} // namespace app::classes::types
