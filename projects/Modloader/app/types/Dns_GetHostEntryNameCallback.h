#pragma once
#include <Modloader/app/structs/Dns_GetHostEntryNameCallback.h>
#include <Modloader/app/structs/Dns_GetHostEntryNameCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dns_GetHostEntryNameCallback {
        inline app::Dns_GetHostEntryNameCallback__Class** type_info() {
            static app::Dns_GetHostEntryNameCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dns_GetHostEntryNameCallback__Class**)(modloader::win::memory::resolve_rva(0x04776B88));
            }
            return cache;
        }
        inline app::Dns_GetHostEntryNameCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_GetHostEntryNameCallback__Class>(type_info(), "System.Net", "Dns", "GetHostEntryNameCallback");
        }
        inline app::Dns_GetHostEntryNameCallback* create() {
            return il2cpp::create_object<app::Dns_GetHostEntryNameCallback>(get_class());
        }
    } // namespace Dns_GetHostEntryNameCallback
} // namespace app::classes::types
