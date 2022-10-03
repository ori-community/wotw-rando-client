#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeLoadException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeLoadException__Class** type_info;
        inline app::TypeLoadException__Class* get_class() {
            return il2cpp::get_class<app::TypeLoadException__Class>(type_info, "System", "TypeLoadException");
        }
        inline app::TypeLoadException* create() {
            return il2cpp::create_object<app::TypeLoadException>(get_class());
        }
    } // namespace TypeLoadException
} // namespace app::classes::types
