#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFNetwork_CFProxyAutoConfigurationResultCallback {
        inline app::CFNetwork_CFProxyAutoConfigurationResultCallback__Class** type_info = (app::CFNetwork_CFProxyAutoConfigurationResultCallback__Class**)(modloader::win::memory::resolve_rva(0x04772818));
        inline app::CFNetwork_CFProxyAutoConfigurationResultCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::CFNetwork_CFProxyAutoConfigurationResultCallback__Class>(type_info, "Mono.Net", "CFNetwork", "CFProxyAutoConfigurationResultCallback");
        }
        inline app::CFNetwork_CFProxyAutoConfigurationResultCallback* create() {
            return il2cpp::create_object<app::CFNetwork_CFProxyAutoConfigurationResultCallback>(get_class());
        }
    } // namespace CFNetwork_CFProxyAutoConfigurationResultCallback
} // namespace app::classes::types
