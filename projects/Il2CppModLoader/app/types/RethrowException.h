#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RethrowException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RethrowException__Class** type_info;
        inline app::RethrowException__Class* get_class() {
            return il2cpp::get_class<app::RethrowException__Class>(type_info, "System.Linq.Expressions.Interpreter", "RethrowException");
        }
        inline app::RethrowException* create() {
            return il2cpp::create_object<app::RethrowException>(get_class());
        }
    } // namespace RethrowException
} // namespace app::classes::types
