#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoIO {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoIO__Class** type_info;
        inline app::MonoIO__Class* get_class() {
            return il2cpp::get_class<app::MonoIO__Class>(type_info, "System.IO", "MonoIO");
        }
        inline app::MonoIO* create() {
            return il2cpp::create_object<app::MonoIO>(get_class());
        }
    } // namespace MonoIO
} // namespace app::classes::types
