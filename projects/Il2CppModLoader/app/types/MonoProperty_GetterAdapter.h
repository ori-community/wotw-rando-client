#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoProperty_GetterAdapter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoProperty_GetterAdapter__Class** type_info;
        inline app::MonoProperty_GetterAdapter__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoProperty_GetterAdapter__Class>(type_info, "System.Reflection", "MonoProperty", "GetterAdapter");
        }
        inline app::MonoProperty_GetterAdapter* create() {
            return il2cpp::create_object<app::MonoProperty_GetterAdapter>(get_class());
        }
    } // namespace MonoProperty_GetterAdapter
} // namespace app::classes::types
