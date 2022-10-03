#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32RegistryApi {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Win32RegistryApi__Class** type_info;
        inline app::Win32RegistryApi__Class* get_class() {
            return il2cpp::get_class<app::Win32RegistryApi__Class>(type_info, "Microsoft.Win32", "Win32RegistryApi");
        }
        inline app::Win32RegistryApi* create() {
            return il2cpp::create_object<app::Win32RegistryApi>(get_class());
        }
    } // namespace Win32RegistryApi
} // namespace app::classes::types
