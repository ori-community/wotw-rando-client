#pragma once
#include <Modloader/app/structs/GhostSceneTrackingPlugin_Data.h>
#include <Modloader/app/structs/GhostSceneTrackingPlugin_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostSceneTrackingPlugin_Data {
        inline app::GhostSceneTrackingPlugin_Data__Class** type_info() {
            static app::GhostSceneTrackingPlugin_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostSceneTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04707248));
            }
            return cache;
        }
        inline app::GhostSceneTrackingPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostSceneTrackingPlugin_Data__Class>(type_info(), "", "GhostSceneTrackingPlugin", "Data");
        }
        inline app::GhostSceneTrackingPlugin_Data* create() {
            return il2cpp::create_object<app::GhostSceneTrackingPlugin_Data>(get_class());
        }
    } // namespace GhostSceneTrackingPlugin_Data
} // namespace app::classes::types
