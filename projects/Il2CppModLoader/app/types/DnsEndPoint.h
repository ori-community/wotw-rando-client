#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DnsEndPoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DnsEndPoint__Class** type_info;
        inline app::DnsEndPoint__Class* get_class() {
            return il2cpp::get_class<app::DnsEndPoint__Class>(type_info, "System.Net", "DnsEndPoint");
        }
        inline app::DnsEndPoint* create() {
            return il2cpp::create_object<app::DnsEndPoint>(get_class());
        }
    } // namespace DnsEndPoint
} // namespace app::classes::types
