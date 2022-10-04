#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRegistryApi {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRegistryApi__Class** type_info;
        inline app::IRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::IRegistryApi__Class>(type_info, "Microsoft.Win32", "IRegistryApi");
        }
    } // namespace IRegistryApi
} // namespace app::classes::types
