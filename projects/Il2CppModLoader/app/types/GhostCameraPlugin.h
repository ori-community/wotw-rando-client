#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCameraPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCameraPlugin__Class** type_info;
        inline app::GhostCameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostCameraPlugin__Class>(type_info, "", "GhostCameraPlugin");
        }
        inline app::GhostCameraPlugin* create() {
            return il2cpp::create_object<app::GhostCameraPlugin>(get_class());
        }
    } // namespace GhostCameraPlugin
} // namespace app::classes::types
