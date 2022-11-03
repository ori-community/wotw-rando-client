#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureGL {
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL__Class** type_info = (app::IVRTrackedCamera_GetVideoStreamTextureGL__Class**)(modloader::win::memory::resolve_rva(0x04727F20));
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureGL__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureGL");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureGL>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureGL
} // namespace app::classes::types
