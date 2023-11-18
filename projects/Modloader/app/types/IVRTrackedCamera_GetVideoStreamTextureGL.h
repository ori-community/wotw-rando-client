#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureGL.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamTextureGL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureGL {
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL__Class** type_info() {
            static app::IVRTrackedCamera_GetVideoStreamTextureGL__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetVideoStreamTextureGL__Class**)(modloader::win::memory::resolve_rva(0x04727F20));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureGL__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureGL");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureGL>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureGL
} // namespace app::classes::types
