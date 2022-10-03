#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyChain_ProxyEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProxyChain_ProxyEnumerator__Class** type_info;
        inline app::ProxyChain_ProxyEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyChain_ProxyEnumerator__Class>(type_info, "System.Net", "ProxyChain", "ProxyEnumerator");
        }
        inline app::ProxyChain_ProxyEnumerator* create() {
            return il2cpp::create_object<app::ProxyChain_ProxyEnumerator>(get_class());
        }
    } // namespace ProxyChain_ProxyEnumerator
} // namespace app::classes::types
