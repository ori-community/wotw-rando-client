#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeIsInstruction {
        inline app::TypeIsInstruction__Class** type_info = (app::TypeIsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04770DF0));
        inline app::TypeIsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeIsInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "TypeIsInstruction");
        }
        inline app::TypeIsInstruction* create() {
            return il2cpp::create_object<app::TypeIsInstruction>(get_class());
        }
    } // namespace TypeIsInstruction
} // namespace app::classes::types
