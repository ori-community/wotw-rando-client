#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProxyAttribute {
        inline app::ProxyAttribute__Class** type_info = (app::ProxyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04741390));
        inline app::ProxyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProxyAttribute__Class>(type_info, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
        }
        inline app::ProxyAttribute* create() {
            return il2cpp::create_object<app::ProxyAttribute>(get_class());
        }
    } // namespace ProxyAttribute
} // namespace app::classes::types
