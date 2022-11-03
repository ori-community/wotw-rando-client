#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dns_GetHostByNameCallback {
        inline app::Dns_GetHostByNameCallback__Class** type_info = (app::Dns_GetHostByNameCallback__Class**)(modloader::win::memory::resolve_rva(0x047546E0));
        inline app::Dns_GetHostByNameCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostByNameCallback__Class>(type_info, "System.Net", "Dns", "GetHostByNameCallback");
        }
        inline app::Dns_GetHostByNameCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostByNameCallback>(get_class());
        }
    } // namespace Dns_GetHostByNameCallback
} // namespace app::classes::types
