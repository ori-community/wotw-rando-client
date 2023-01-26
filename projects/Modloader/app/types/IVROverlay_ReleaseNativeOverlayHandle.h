#pragma once
#include <Modloader/app/structs/IVROverlay_ReleaseNativeOverlayHandle.h>
#include <Modloader/app/structs/IVROverlay_ReleaseNativeOverlayHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_ReleaseNativeOverlayHandle {
        inline app::IVROverlay_ReleaseNativeOverlayHandle__Class** type_info() {
            static app::IVROverlay_ReleaseNativeOverlayHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_ReleaseNativeOverlayHandle__Class**)(modloader::win::memory::resolve_rva(0x04730B58));
            }
            return cache;
        }
        inline app::IVROverlay_ReleaseNativeOverlayHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ReleaseNativeOverlayHandle__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ReleaseNativeOverlayHandle");
        }
        inline app::IVROverlay_ReleaseNativeOverlayHandle* create() {
            return il2cpp::create_object<app::IVROverlay_ReleaseNativeOverlayHandle>(get_class());
        }
    } // namespace IVROverlay_ReleaseNativeOverlayHandle
} // namespace app::classes::types
