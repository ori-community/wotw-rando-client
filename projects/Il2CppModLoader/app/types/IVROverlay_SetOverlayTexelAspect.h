#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayTexelAspect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_SetOverlayTexelAspect__Class** type_info;
        inline app::IVROverlay_SetOverlayTexelAspect__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayTexelAspect__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayTexelAspect");
        }
        inline app::IVROverlay_SetOverlayTexelAspect* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayTexelAspect>(get_class());
        }
    } // namespace IVROverlay_SetOverlayTexelAspect
} // namespace app::classes::types
