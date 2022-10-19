#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTextureColorSpace {
        inline app::IVROverlay_SetOverlayTextureColorSpace__Class** type_info = (app::IVROverlay_SetOverlayTextureColorSpace__Class**)(modloader::win::memory::resolve_rva(0x04725300));
        inline app::IVROverlay_SetOverlayTextureColorSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTextureColorSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTextureColorSpace");
        }
        inline app::IVROverlay_SetOverlayTextureColorSpace* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTextureColorSpace>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTextureColorSpace
} // namespace app::classes::types
