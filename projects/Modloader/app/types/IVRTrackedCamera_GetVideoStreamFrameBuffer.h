#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamFrameBuffer.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetVideoStreamFrameBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamFrameBuffer {
        inline app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class** type_info() {
            static app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class**)(modloader::win::memory::resolve_rva(0x0471E8F0));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamFrameBuffer");
        }
        inline app::IVRTrackedCamera_GetVideoStreamFrameBuffer* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamFrameBuffer>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamFrameBuffer
} // namespace app::classes::types
