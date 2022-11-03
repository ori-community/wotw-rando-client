#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraErrorNameFromEnum {
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class** type_info = (app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04748760));
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraErrorNameFromEnum");
        }
        inline app::IVRTrackedCamera_GetCameraErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraErrorNameFromEnum>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraErrorNameFromEnum
} // namespace app::classes::types
