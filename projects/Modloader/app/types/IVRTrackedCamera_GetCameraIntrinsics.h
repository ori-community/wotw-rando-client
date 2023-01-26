#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraIntrinsics.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraIntrinsics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraIntrinsics {
        inline app::IVRTrackedCamera_GetCameraIntrinsics__Class** type_info() {
            static app::IVRTrackedCamera_GetCameraIntrinsics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetCameraIntrinsics__Class**)(modloader::win::memory::resolve_rva(0x04719220));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetCameraIntrinsics__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraIntrinsics__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraIntrinsics");
        }
        inline app::IVRTrackedCamera_GetCameraIntrinsics* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraIntrinsics>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraIntrinsics
} // namespace app::classes::types
