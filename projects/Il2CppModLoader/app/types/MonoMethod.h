#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoMethod__Class** type_info;
        inline app::MonoMethod__Class* get_class() {
            return il2cpp::get_class<app::MonoMethod__Class>(type_info, "System.Reflection", "MonoMethod");
        }
        inline app::MonoMethod* create() {
            return il2cpp::create_object<app::MonoMethod>(get_class());
        }
    } // namespace MonoMethod
} // namespace app::classes::types
