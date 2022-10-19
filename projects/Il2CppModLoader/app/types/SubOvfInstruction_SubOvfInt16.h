#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfInt16 {
        inline app::SubOvfInstruction_SubOvfInt16__Class** type_info = (app::SubOvfInstruction_SubOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x047127D8));
        inline app::SubOvfInstruction_SubOvfInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfInt16");
        }
        inline app::SubOvfInstruction_SubOvfInt16* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfInt16>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfInt16
} // namespace app::classes::types
