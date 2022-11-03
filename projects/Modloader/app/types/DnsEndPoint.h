#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DnsEndPoint {
        inline app::DnsEndPoint__Class** type_info = (app::DnsEndPoint__Class**)(modloader::win::memory::resolve_rva(0x047918D0));
        inline app::DnsEndPoint__Class* get_class() {
            return il2cpp::get_class<app::DnsEndPoint__Class>(type_info, "System.Net", "DnsEndPoint");
        }
        inline app::DnsEndPoint* create() {
            return il2cpp::create_object<app::DnsEndPoint>(get_class());
        }
    } // namespace DnsEndPoint
} // namespace app::classes::types
