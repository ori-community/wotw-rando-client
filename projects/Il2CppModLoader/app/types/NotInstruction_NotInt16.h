#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt16 {
        inline app::NotInstruction_NotInt16__Class** type_info = (app::NotInstruction_NotInt16__Class**)(modloader::win::memory::resolve_rva(0x0470B9A8));
        inline app::NotInstruction_NotInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt16");
        }
        inline app::NotInstruction_NotInt16* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt16>(get_class());
        }
    } // namespace NotInstruction_NotInt16
} // namespace app::classes::types
