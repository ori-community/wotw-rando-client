#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureSize.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureSize {
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize__Class** type_info() {
            static app::IVRTrackedCamera_GetVideoStreamTextureSize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetVideoStreamTextureSize__Class**)(modloader::win::memory::resolve_rva(0x0476E350));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureSize__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureSize");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureSize
} // namespace app::classes::types
