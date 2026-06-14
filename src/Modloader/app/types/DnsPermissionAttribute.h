#pragma once
#include <Modloader/app/structs/DnsPermissionAttribute.h>
#include <Modloader/app/structs/DnsPermissionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DnsPermissionAttribute {
        inline app::DnsPermissionAttribute__Class** type_info() {
            static app::DnsPermissionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DnsPermissionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DnsPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DnsPermissionAttribute__Class>(type_info(), "System.Net", "DnsPermissionAttribute");
        }
        inline app::DnsPermissionAttribute* create() {
            return il2cpp::create_object<app::DnsPermissionAttribute>(get_class());
        }
    } // namespace DnsPermissionAttribute
} // namespace app::classes::types
