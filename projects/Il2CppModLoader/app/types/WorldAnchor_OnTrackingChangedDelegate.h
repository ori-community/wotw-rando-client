#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
