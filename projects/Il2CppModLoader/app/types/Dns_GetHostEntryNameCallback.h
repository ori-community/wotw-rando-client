#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dns_GetHostEntryNameCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dns_GetHostEntryNameCallback__Class** type_info;
        inline app::Dns_GetHostEntryNameCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostEntryNameCallback__Class>(type_info, "System.Net", "Dns", "GetHostEntryNameCallback");
        }
        inline app::Dns_GetHostEntryNameCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostEntryNameCallback>(get_class());
        }
    } // namespace Dns_GetHostEntryNameCallback
} // namespace app::classes::types
