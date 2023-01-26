#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamTextureGL.h>
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_ReleaseVideoStreamTextureGL {
        inline app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class** type_info() {
            static app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class**)(modloader::win::memory::resolve_rva(0x04767858));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_ReleaseVideoStreamTextureGL");
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_ReleaseVideoStreamTextureGL>(get_class());
        }
    } // namespace IVRTrackedCamera_ReleaseVideoStreamTextureGL
} // namespace app::classes::types
