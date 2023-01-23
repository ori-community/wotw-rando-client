#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldAnchor_OnTrackingChangedDelegate__Class.h>
#include <Modloader/app/structs/WorldAnchor_OnTrackingChangedDelegate.h>

namespace app::classes::types {
    namespace WorldAnchor_OnTrackingChangedDelegate {
        namespace {
            inline app::WorldAnchor_OnTrackingChangedDelegate__Class* type_info_ref = nullptr;
        }
        inline app::WorldAnchor_OnTrackingChangedDelegate__Class** type_info = &type_info_ref;
        inline app::WorldAnchor_OnTrackingChangedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldAnchor_OnTrackingChangedDelegate__Class>(type_info, "UnityEngine.XR.WSA", "WorldAnchor", "OnTrackingChangedDelegate");
        }
        inline app::WorldAnchor_OnTrackingChangedDelegate* create() {
            return il2cpp::create_object<app::WorldAnchor_OnTrackingChangedDelegate>(get_class());
        }
    } // namespace WorldAnchor_OnTrackingChangedDelegate
} // namespace app::classes::types
