#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetCameraFrameSize {
        inline app::IVRTrackedCamera_GetCameraFrameSize__Class** type_info = (app::IVRTrackedCamera_GetCameraFrameSize__Class**)(modloader::win::memory::resolve_rva(0x0477A4E0));
        inline app::IVRTrackedCamera_GetCameraFrameSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetCameraFrameSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetCameraFrameSize");
        }
        inline app::IVRTrackedCamera_GetCameraFrameSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetCameraFrameSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetCameraFrameSize
} // namespace app::classes::types
