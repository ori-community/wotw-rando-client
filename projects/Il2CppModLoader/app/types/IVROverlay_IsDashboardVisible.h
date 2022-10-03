#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVROverlay_IsDashboardVisible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVROverlay_IsDashboardVisible__Class** type_info;
        inline app::IVROverlay_IsDashboardVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_IsDashboardVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_IsDashboardVisible");
        }
        inline app::IVROverlay_IsDashboardVisible* create() {
            return il2cpp::create_object<app::IVROverlay_IsDashboardVisible>(get_class());
        }
    } // namespace IVROverlay_IsDashboardVisible
} // namespace app::classes::types
