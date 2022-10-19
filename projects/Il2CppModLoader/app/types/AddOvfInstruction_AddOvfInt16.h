#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfInt16 {
        inline app::AddOvfInstruction_AddOvfInt16__Class** type_info = (app::AddOvfInstruction_AddOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x047225F8));
        inline app::AddOvfInstruction_AddOvfInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfInt16");
        }
        inline app::AddOvfInstruction_AddOvfInt16* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfInt16>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfInt16
} // namespace app::classes::types
