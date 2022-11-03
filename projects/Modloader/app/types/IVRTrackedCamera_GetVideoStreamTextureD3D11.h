#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureD3D11 {
        inline app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class** type_info = (app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0473BEA0));
        inline app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureD3D11");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureD3D11* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureD3D11>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureD3D11
} // namespace app::classes::types
