#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformMovement {
        inline app::PlatformMovement__Class** type_info = (app::PlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04757B60));
        inline app::PlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovement__Class>(type_info, "", "PlatformMovement");
        }
        inline app::PlatformMovement* create() {
            return il2cpp::create_object<app::PlatformMovement>(get_class());
        }
    } // namespace PlatformMovement
} // namespace app::classes::types
