#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_GetHighQualityOverlay {
        inline app::IVROverlay_GetHighQualityOverlay__Class** type_info = (app::IVROverlay_GetHighQualityOverlay__Class**)(modloader::win::memory::resolve_rva(0x04717DF0));
        inline app::IVROverlay_GetHighQualityOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetHighQualityOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetHighQualityOverlay");
        }
        inline app::IVROverlay_GetHighQualityOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_GetHighQualityOverlay>(get_class());
        }
    } // namespace IVROverlay_GetHighQualityOverlay
} // namespace app::classes::types
