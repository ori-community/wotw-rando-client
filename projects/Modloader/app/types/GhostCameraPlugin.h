#pragma once
#include <Modloader/app/structs/GhostCameraPlugin.h>
#include <Modloader/app/structs/GhostCameraPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostCameraPlugin {
        inline app::GhostCameraPlugin__Class** type_info() {
            static app::GhostCameraPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostCameraPlugin__Class**)(modloader::win::memory::resolve_rva(0x04781EE8));
            }
            return cache;
        }
        inline app::GhostCameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCameraPlugin__Class>(type_info(), "", "GhostCameraPlugin");
        }
        inline app::GhostCameraPlugin* create() {
            return il2cpp::create_object<app::GhostCameraPlugin>(get_class());
        }
    } // namespace GhostCameraPlugin
} // namespace app::classes::types
