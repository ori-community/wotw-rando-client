#pragma once
#include <Modloader/app/structs/GhostSceneTrackingPlugin.h>
#include <Modloader/app/structs/GhostSceneTrackingPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostSceneTrackingPlugin {
        inline app::GhostSceneTrackingPlugin__Class** type_info() {
            static app::GhostSceneTrackingPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostSceneTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x04736110));
            }
            return cache;
        }
        inline app::GhostSceneTrackingPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostSceneTrackingPlugin__Class>(type_info(), "", "GhostSceneTrackingPlugin");
        }
        inline app::GhostSceneTrackingPlugin* create() {
            return il2cpp::create_object<app::GhostSceneTrackingPlugin>(get_class());
        }
    } // namespace GhostSceneTrackingPlugin
} // namespace app::classes::types
