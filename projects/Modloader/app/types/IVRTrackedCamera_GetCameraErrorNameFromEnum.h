#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraErrorNameFromEnum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraErrorNameFromEnum {
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class** type_info() {
            static app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04748760));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraErrorNameFromEnum");
        }
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraErrorNameFromEnum>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraErrorNameFromEnum
} // namespace app::classes::types
