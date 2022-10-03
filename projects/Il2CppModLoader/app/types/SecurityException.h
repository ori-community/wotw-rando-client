#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityException__Class** type_info;
        inline app::SecurityException__Class* get_class() {
            return il2cpp::get_class<app::SecurityException__Class>(type_info, "System.Security", "SecurityException");
        }
        inline app::SecurityException* create() {
            return il2cpp::create_object<app::SecurityException>(get_class());
        }
    } // namespace SecurityException
} // namespace app::classes::types
