#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Interpreter {
        inline app::Interpreter__Class** type_info = (app::Interpreter__Class**)(modloader::win::memory::resolve_rva(0x04733540));
        inline app::Interpreter__Class* get_class() {
            return il2cpp::get_class<app::Interpreter__Class>(type_info, "System.Linq.Expressions.Interpreter", "Interpreter");
        }
        inline app::Interpreter* create() {
            return il2cpp::create_object<app::Interpreter>(get_class());
        }
    } // namespace Interpreter
} // namespace app::classes::types
