#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DnsPermission {
        namespace {
            inline app::DnsPermission__Class* type_info_ref = nullptr;
        }
        inline app::DnsPermission__Class** type_info = &type_info_ref;
        inline app::DnsPermission__Class* get_class() {
            return il2cpp::get_class<app::DnsPermission__Class>(type_info, "System.Net", "DnsPermission");
        }
        inline app::DnsPermission* create() {
            return il2cpp::create_object<app::DnsPermission>(get_class());
        }
    } // namespace DnsPermission
} // namespace app::classes::types
