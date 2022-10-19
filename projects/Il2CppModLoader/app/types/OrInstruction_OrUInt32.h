#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt32 {
        inline app::OrInstruction_OrUInt32__Class** type_info = (app::OrInstruction_OrUInt32__Class**)(modloader::win::memory::resolve_rva(0x04718C00));
        inline app::OrInstruction_OrUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt32");
        }
        inline app::OrInstruction_OrUInt32* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt32>(get_class());
        }
    } // namespace OrInstruction_OrUInt32
} // namespace app::classes::types
