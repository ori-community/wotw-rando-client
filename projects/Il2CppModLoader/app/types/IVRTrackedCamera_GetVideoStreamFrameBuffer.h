#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamFrameBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class** type_info;
        inline app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamFrameBuffer");
        }
        inline app::IVRTrackedCamera_GetVideoStreamFrameBuffer* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamFrameBuffer>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamFrameBuffer
} // namespace app::classes::types
