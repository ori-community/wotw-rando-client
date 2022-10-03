#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrInstruction_OrUInt16__Class** type_info;
        inline app::OrInstruction_OrUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt16");
        }
        inline app::OrInstruction_OrUInt16* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt16>(get_class());
        }
    } // namespace OrInstruction_OrUInt16
} // namespace app::classes::types
