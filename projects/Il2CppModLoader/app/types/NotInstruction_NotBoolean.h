#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotInstruction_NotBoolean {
        inline app::NotInstruction_NotBoolean__Class** type_info = (app::NotInstruction_NotBoolean__Class**)(modloader::win::memory::resolve_rva(0x0472AEB0));
        inline app::NotInstruction_NotBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotBoolean");
        }
        inline app::NotInstruction_NotBoolean* create() {
            return il2cpp::create_object<app::NotInstruction_NotBoolean>(get_class());
        }
    } // namespace NotInstruction_NotBoolean
} // namespace app::classes::types
