#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoCMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoCMethod__Class** type_info;
        inline app::MonoCMethod__Class* get_class() {
            return il2cpp::get_class<app::MonoCMethod__Class>(type_info, "System.Reflection", "MonoCMethod");
        }
        inline app::MonoCMethod* create() {
            return il2cpp::create_object<app::MonoCMethod>(get_class());
        }
    } // namespace MonoCMethod
} // namespace app::classes::types
