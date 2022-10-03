#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_GetHighQualityOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_GetHighQualityOverlay__Class** type_info;
        inline app::IVROverlay_GetHighQualityOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_GetHighQualityOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_GetHighQualityOverlay");
        }
        inline app::IVROverlay_GetHighQualityOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_GetHighQualityOverlay>(get_class());
        }
    } // namespace IVROverlay_GetHighQualityOverlay
} // namespace app::classes::types
