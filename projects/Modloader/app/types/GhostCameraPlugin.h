#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostCameraPlugin {
        inline app::GhostCameraPlugin__Class** type_info = (app::GhostCameraPlugin__Class**)(modloader::win::memory::resolve_rva(0x04781EE8));
        inline app::GhostCameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCameraPlugin__Class>(type_info, "", "GhostCameraPlugin");
        }
        inline app::GhostCameraPlugin* create() {
            return il2cpp::create_object<app::GhostCameraPlugin>(get_class());
        }
    } // namespace GhostCameraPlugin
} // namespace app::classes::types
