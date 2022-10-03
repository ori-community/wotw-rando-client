#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegistryKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegistryKey__Class** type_info;
        inline app::RegistryKey__Class* get_class() {
            return il2cpp::get_class<app::RegistryKey__Class>(type_info, "Microsoft.Win32", "RegistryKey");
        }
        inline app::RegistryKey* create() {
            return il2cpp::create_object<app::RegistryKey>(get_class());
        }
    } // namespace RegistryKey
} // namespace app::classes::types
