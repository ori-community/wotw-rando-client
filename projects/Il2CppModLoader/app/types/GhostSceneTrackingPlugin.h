#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostSceneTrackingPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostSceneTrackingPlugin__Class** type_info;
        inline app::GhostSceneTrackingPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostSceneTrackingPlugin__Class>(type_info, "", "GhostSceneTrackingPlugin");
        }
        inline app::GhostSceneTrackingPlugin* create() {
            return il2cpp::create_object<app::GhostSceneTrackingPlugin>(get_class());
        }
    } // namespace GhostSceneTrackingPlugin
} // namespace app::classes::types
