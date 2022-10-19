#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dns_GetHostEntryIPCallback {
        inline app::Dns_GetHostEntryIPCallback__Class** type_info = (app::Dns_GetHostEntryIPCallback__Class**)(modloader::win::memory::resolve_rva(0x04785D70));
        inline app::Dns_GetHostEntryIPCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostEntryIPCallback__Class>(type_info, "System.Net", "Dns", "GetHostEntryIPCallback");
        }
        inline app::Dns_GetHostEntryIPCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostEntryIPCallback>(get_class());
        }
    } // namespace Dns_GetHostEntryIPCallback
} // namespace app::classes::types
