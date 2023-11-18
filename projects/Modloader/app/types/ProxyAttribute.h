#pragma once
#include <Modloader/app/structs/ProxyAttribute.h>
#include <Modloader/app/structs/ProxyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProxyAttribute {
        inline app::ProxyAttribute__Class** type_info() {
            static app::ProxyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProxyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04741390));
            }
            return cache;
        }
        inline app::ProxyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProxyAttribute__Class>(type_info(), "System.Runtime.Remoting.Proxies", "ProxyAttribute");
        }
        inline app::ProxyAttribute* create() {
            return il2cpp::create_object<app::ProxyAttribute>(get_class());
        }
    } // namespace ProxyAttribute
} // namespace app::classes::types
