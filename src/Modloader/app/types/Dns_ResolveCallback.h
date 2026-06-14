#pragma once
#include <Modloader/app/structs/Dns_ResolveCallback.h>
#include <Modloader/app/structs/Dns_ResolveCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dns_ResolveCallback {
        inline app::Dns_ResolveCallback__Class** type_info() {
            static app::Dns_ResolveCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dns_ResolveCallback__Class**)(modloader::win::memory::resolve_rva(0x0478FD88));
            }
            return cache;
        }
        inline app::Dns_ResolveCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Dns_ResolveCallback__Class>(type_info(), "System.Net", "Dns", "ResolveCallback");
        }
        inline app::Dns_ResolveCallback* create() {
            return il2cpp::create_object<app::Dns_ResolveCallback>(get_class());
        }
    } // namespace Dns_ResolveCallback
} // namespace app::classes::types
