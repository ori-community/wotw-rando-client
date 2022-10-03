#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrInstruction_OrUInt32__Class** type_info;
        inline app::OrInstruction_OrUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt32");
        }
        inline app::OrInstruction_OrUInt32* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt32>(get_class());
        }
    } // namespace OrInstruction_OrUInt32
} // namespace app::classes::types
