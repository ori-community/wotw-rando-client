#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraFrameSize.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraFrameSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraFrameSize {
        inline app::IVRTrackedCamera_GetCameraFrameSize__Class** type_info() {
            static app::IVRTrackedCamera_GetCameraFrameSize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetCameraFrameSize__Class**)(modloader::win::memory::resolve_rva(0x0477A4E0));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetCameraFrameSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraFrameSize__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraFrameSize");
        }
        inline app::IVRTrackedCamera_GetCameraFrameSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraFrameSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraFrameSize
} // namespace app::classes::types
