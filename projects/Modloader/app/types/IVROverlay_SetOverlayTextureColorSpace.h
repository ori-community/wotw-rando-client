#pragma once
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureColorSpace.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureColorSpace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTextureColorSpace {
        inline app::IVROverlay_SetOverlayTextureColorSpace__Class** type_info() {
            static app::IVROverlay_SetOverlayTextureColorSpace__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVROverlay_SetOverlayTextureColorSpace__Class**)(modloader::win::memory::resolve_rva(0x04725300));
            }
            return cache;
        }
        inline app::IVROverlay_SetOverlayTextureColorSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTextureColorSpace__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTextureColorSpace");
        }
        inline app::IVROverlay_SetOverlayTextureColorSpace* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTextureColorSpace>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTextureColorSpace
} // namespace app::classes::types
