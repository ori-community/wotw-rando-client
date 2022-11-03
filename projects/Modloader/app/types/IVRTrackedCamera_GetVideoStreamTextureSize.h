#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureSize {
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize__Class** type_info = (app::IVRTrackedCamera_GetVideoStreamTextureSize__Class**)(modloader::win::memory::resolve_rva(0x0476E350));
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureSize");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureSize
} // namespace app::classes::types
