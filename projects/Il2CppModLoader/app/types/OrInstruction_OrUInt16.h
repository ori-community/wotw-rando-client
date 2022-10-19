#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt16 {
        inline app::OrInstruction_OrUInt16__Class** type_info = (app::OrInstruction_OrUInt16__Class**)(modloader::win::memory::resolve_rva(0x047843E0));
        inline app::OrInstruction_OrUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt16");
        }
        inline app::OrInstruction_OrUInt16* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt16>(get_class());
        }
    } // namespace OrInstruction_OrUInt16
} // namespace app::classes::types
