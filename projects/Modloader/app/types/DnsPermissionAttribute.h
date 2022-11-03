#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DnsPermissionAttribute {
        namespace {
            inline app::DnsPermissionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DnsPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::DnsPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DnsPermissionAttribute__Class>(type_info, "System.Net", "DnsPermissionAttribute");
        }
        inline app::DnsPermissionAttribute* create() {
            return il2cpp::create_object<app::DnsPermissionAttribute>(get_class());
        }
    } // namespace DnsPermissionAttribute
} // namespace app::classes::types
