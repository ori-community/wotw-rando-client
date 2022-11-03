#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TeleportBeacon {
        inline app::TeleportBeacon__Class** type_info = (app::TeleportBeacon__Class**)(modloader::win::memory::resolve_rva(0x0472EAC0));
        inline app::TeleportBeacon__Class* get_class() {
            return il2cpp::get_class<app::TeleportBeacon__Class>(type_info, "", "TeleportBeacon");
        }
        inline app::TeleportBeacon* create() {
            return il2cpp::create_object<app::TeleportBeacon>(get_class());
        }
    } // namespace TeleportBeacon
} // namespace app::classes::types
