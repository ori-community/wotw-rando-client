#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProxyAttribute__Class** type_info;
        inline app::ProxyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProxyAttribute__Class>(type_info, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
        }
        inline app::ProxyAttribute* create() {
            return il2cpp::create_object<app::ProxyAttribute>(get_class());
        }
    } // namespace ProxyAttribute
} // namespace app::classes::types
