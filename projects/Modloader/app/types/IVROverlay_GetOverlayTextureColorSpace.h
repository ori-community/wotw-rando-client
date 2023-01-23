#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureColorSpace__Class.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureColorSpace.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayTextureColorSpace {
        inline app::IVROverlay_GetOverlayTextureColorSpace__Class** type_info = (app::IVROverlay_GetOverlayTextureColorSpace__Class**)(modloader::win::memory::resolve_rva(0x0478F6B8));
        inline app::IVROverlay_GetOverlayTextureColorSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayTextureColorSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayTextureColorSpace");
        }
        inline app::IVROverlay_GetOverlayTextureColorSpace* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayTextureColorSpace>(get_class());
        }
    } // namespace IVROverlay_GetOverlayTextureColorSpace
} // namespace app::classes::types
