#pragma once
#include <Modloader/app/structs/GhostTimeTrackingPlugin.h>
#include <Modloader/app/structs/GhostTimeTrackingPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostTimeTrackingPlugin {
        inline app::GhostTimeTrackingPlugin__Class** type_info() {
            static app::GhostTimeTrackingPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostTimeTrackingPlugin__Class**)(modloader::win::memory::resolve_rva(0x0473ED80));
            }
            return cache;
        }
        inline app::GhostTimeTrackingPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostTimeTrackingPlugin__Class>(type_info(), "", "GhostTimeTrackingPlugin");
        }
        inline app::GhostTimeTrackingPlugin* create() {
            return il2cpp::create_object<app::GhostTimeTrackingPlugin>(get_class());
        }
    } // namespace GhostTimeTrackingPlugin
} // namespace app::classes::types
