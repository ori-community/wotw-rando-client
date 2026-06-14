#pragma once
#include <Modloader/app/structs/DnsPermission.h>
#include <Modloader/app/structs/DnsPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DnsPermission {
        inline app::DnsPermission__Class** type_info() {
            static app::DnsPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DnsPermission__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DnsPermission__Class* get_class() {
            return il2cpp::get_class<app::DnsPermission__Class>(type_info(), "System.Net", "DnsPermission");
        }
        inline app::DnsPermission* create() {
            return il2cpp::create_object<app::DnsPermission>(get_class());
        }
    } // namespace DnsPermission
} // namespace app::classes::types
