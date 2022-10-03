#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dns_ResolveCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dns_ResolveCallback__Class** type_info;
        inline app::Dns_ResolveCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_ResolveCallback__Class>(type_info, "System.Net", "Dns", "ResolveCallback");
        }
        inline app::Dns_ResolveCallback* create() {
            return il2cpp::create_object<app::Dns_ResolveCallback>(get_class());
        }
    } // namespace Dns_ResolveCallback
} // namespace app::classes::types
