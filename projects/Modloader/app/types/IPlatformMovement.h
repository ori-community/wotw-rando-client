#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlatformMovement {
        inline app::IPlatformMovement__Class** type_info = (app::IPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04756850));
        inline app::IPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::IPlatformMovement__Class>(type_info, "", "IPlatformMovement");
        }
    } // namespace IPlatformMovement
} // namespace app::classes::types
