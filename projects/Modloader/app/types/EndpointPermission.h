#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EndpointPermission__Class.h>
#include <Modloader/app/structs/EndpointPermission.h>

namespace app::classes::types {
    namespace EndpointPermission {
        inline app::EndpointPermission__Class** type_info = (app::EndpointPermission__Class**)(modloader::win::memory::resolve_rva(0x04790410));
        inline app::EndpointPermission__Class* get_class() {
            return il2cpp::get_class<app::EndpointPermission__Class>(type_info, "System.Net", "EndpointPermission");
        }
        inline app::EndpointPermission* create() {
            return il2cpp::create_object<app::EndpointPermission>(get_class());
        }
    } // namespace EndpointPermission
} // namespace app::classes::types
