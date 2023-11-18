#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraProjection.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraProjection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraProjection {
        inline app::IVRTrackedCamera_GetCameraProjection__Class** type_info() {
            static app::IVRTrackedCamera_GetCameraProjection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetCameraProjection__Class**)(modloader::win::memory::resolve_rva(0x047135B0));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetCameraProjection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraProjection__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraProjection");
        }
        inline app::IVRTrackedCamera_GetCameraProjection* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraProjection>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraProjection
} // namespace app::classes::types
