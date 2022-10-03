#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dns_GetHostByNameCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dns_GetHostByNameCallback__Class** type_info;
        inline app::Dns_GetHostByNameCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostByNameCallback__Class>(type_info, "System.Net", "Dns", "GetHostByNameCallback");
        }
        inline app::Dns_GetHostByNameCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostByNameCallback>(get_class());
        }
    } // namespace Dns_GetHostByNameCallback
} // namespace app::classes::types
