#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostSceneTrackingPlugin {
        inline app::GhostSceneTrackingPlugin__Class** type_info = (app::GhostSceneTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x04736110));
        inline app::GhostSceneTrackingPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostSceneTrackingPlugin__Class>(type_info, "", "GhostSceneTrackingPlugin");
        }
        inline app::GhostSceneTrackingPlugin* create() {
            return il2cpp::create_object<app::GhostSceneTrackingPlugin>(get_class());
        }
    } // namespace GhostSceneTrackingPlugin
} // namespace app::classes::types
