#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetOverlayErrorNameFromEnum {
        inline app::IVROverlay_GetOverlayErrorNameFromEnum__Class** type_info = (app::IVROverlay_GetOverlayErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04731228));
        inline app::IVROverlay_GetOverlayErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetOverlayErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetOverlayErrorNameFromEnum");
        }
        inline app::IVROverlay_GetOverlayErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVROverlay_GetOverlayErrorNameFromEnum>(get_class());
        }
    } // namespace IVROverlay_GetOverlayErrorNameFromEnum
} // namespace app::classes::types
