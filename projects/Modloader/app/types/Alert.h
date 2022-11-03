#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Alert {
        inline app::Alert__Class** type_info = (app::Alert__Class**)(modloader::win::memory::resolve_rva(0x0475CCF8));
        inline app::Alert__Class* get_class() {
            return il2cpp::get_class<app::Alert__Class>(type_info, "Mono.Security.Protocol.Tls", "Alert");
        }
        inline app::Alert* create() {
            return il2cpp::create_object<app::Alert>(get_class());
        }
    } // namespace Alert
} // namespace app::classes::types
