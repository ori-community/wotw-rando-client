#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnixRegistryApi {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnixRegistryApi__Class** type_info;
        inline app::UnixRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::UnixRegistryApi__Class>(type_info, "Microsoft.Win32", "UnixRegistryApi");
        }
        inline app::UnixRegistryApi* create() {
            return il2cpp::create_object<app::UnixRegistryApi>(get_class());
        }
    } // namespace UnixRegistryApi
} // namespace app::classes::types
