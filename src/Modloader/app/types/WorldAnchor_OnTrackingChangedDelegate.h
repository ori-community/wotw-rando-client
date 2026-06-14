#pragma once
#include <Modloader/app/structs/WorldAnchor_OnTrackingChangedDelegate.h>
#include <Modloader/app/structs/WorldAnchor_OnTrackingChangedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldAnchor_OnTrackingChangedDelegate {
        inline app::WorldAnchor_OnTrackingChangedDelegate__Class** type_info() {
            static app::WorldAnchor_OnTrackingChangedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldAnchor_OnTrackingChangedDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldAnchor_OnTrackingChangedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldAnchor_OnTrackingChangedDelegate__Class>(type_info(), "UnityEngine.XR.WSA", "WorldAnchor", "OnTrackingChangedDelegate");
        }
        inline app::WorldAnchor_OnTrackingChangedDelegate* create() {
            return il2cpp::create_object<app::WorldAnchor_OnTrackingChangedDelegate>(get_class());
        }
    } // namespace WorldAnchor_OnTrackingChangedDelegate
} // namespace app::classes::types
