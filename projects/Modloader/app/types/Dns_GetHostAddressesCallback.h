#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dns_GetHostAddressesCallback {
        inline app::Dns_GetHostAddressesCallback__Class** type_info = (app::Dns_GetHostAddressesCallback__Class**)(modloader::win::memory::resolve_rva(0x04782718));
        inline app::Dns_GetHostAddressesCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostAddressesCallback__Class>(type_info, "System.Net", "Dns", "GetHostAddressesCallback");
        }
        inline app::Dns_GetHostAddressesCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostAddressesCallback>(get_class());
        }
    } // namespace Dns_GetHostAddressesCallback
} // namespace app::classes::types
