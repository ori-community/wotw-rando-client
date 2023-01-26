#pragma once
#include <Modloader/app/structs/DnsEndPoint.h>
#include <Modloader/app/structs/DnsEndPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DnsEndPoint {
        inline app::DnsEndPoint__Class** type_info() {
            static app::DnsEndPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DnsEndPoint__Class**)(modloader::win::memory::resolve_rva(0x047918D0));
            }
            return cache;
        }
        inline app::DnsEndPoint__Class* get_class() {
            return il2cpp::get_class<app::DnsEndPoint__Class>(type_info(), "System.Net", "DnsEndPoint");
        }
        inline app::DnsEndPoint* create() {
            return il2cpp::create_object<app::DnsEndPoint>(get_class());
        }
    } // namespace DnsEndPoint
} // namespace app::classes::types
