#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_IsActiveDashboardOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_IsActiveDashboardOverlay__Class** type_info;
        inline app::IVROverlay_IsActiveDashboardOverlay__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsActiveDashboardOverlay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsActiveDashboardOverlay");
        }
        inline app::IVROverlay_IsActiveDashboardOverlay* create() {
            return il2cpp::create_object<app::IVROverlay_IsActiveDashboardOverlay>(get_class());
        }
    } // namespace IVROverlay_IsActiveDashboardOverlay
} // namespace app::classes::types
