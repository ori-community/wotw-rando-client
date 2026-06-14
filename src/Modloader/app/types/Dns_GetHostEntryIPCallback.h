#pragma once
#include <Modloader/app/structs/Dns_GetHostEntryIPCallback.h>
#include <Modloader/app/structs/Dns_GetHostEntryIPCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dns_GetHostEntryIPCallback {
        inline app::Dns_GetHostEntryIPCallback__Class** type_info() {
            static app::Dns_GetHostEntryIPCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dns_GetHostEntryIPCallback__Class**)(modloader::win::memory::resolve_rva(0x04785D70));
            }
            return cache;
        }
        inline app::Dns_GetHostEntryIPCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostEntryIPCallback__Class>(type_info(), "System.Net", "Dns", "GetHostEntryIPCallback");
        }
        inline app::Dns_GetHostEntryIPCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostEntryIPCallback>(get_class());
        }
    } // namespace Dns_GetHostEntryIPCallback
} // namespace app::classes::types
