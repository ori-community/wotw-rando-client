#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetHighQualityOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetHighQualityOverlay__Class** type_info;
        inline app::IVROverlay_SetHighQualityOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetHighQualityOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetHighQualityOverlay");
        }
        inline app::IVROverlay_SetHighQualityOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_SetHighQualityOverlay>(get_class());
        }
    } // namespace IVROverlay_SetHighQualityOverlay
} // namespace app::classes::types
