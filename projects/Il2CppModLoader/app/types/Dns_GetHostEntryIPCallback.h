#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dns_GetHostEntryIPCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dns_GetHostEntryIPCallback__Class** type_info;
        inline app::Dns_GetHostEntryIPCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostEntryIPCallback__Class>(type_info, "System.Net", "Dns", "GetHostEntryIPCallback");
        }
        inline app::Dns_GetHostEntryIPCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostEntryIPCallback>(get_class());
        }
    } // namespace Dns_GetHostEntryIPCallback
} // namespace app::classes::types
