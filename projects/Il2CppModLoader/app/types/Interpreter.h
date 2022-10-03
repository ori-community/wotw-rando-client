#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Interpreter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Interpreter__Class** type_info;
        inline app::Interpreter__Class* get_class() {
            return il2cpp::get_class<app::Interpreter__Class>(type_info, "System.Linq.Expressions.Interpreter", "Interpreter");
        }
        inline app::Interpreter* create() {
            return il2cpp::create_object<app::Interpreter>(get_class());
        }
    } // namespace Interpreter
} // namespace app::classes::types
