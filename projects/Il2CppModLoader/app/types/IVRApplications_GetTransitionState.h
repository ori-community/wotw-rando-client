#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetTransitionState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetTransitionState__Class** type_info;
        inline app::IVRApplications_GetTransitionState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetTransitionState__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetTransitionState");
        }
        inline app::IVRApplications_GetTransitionState* create() {
            return il2cpp::create_object<app::IVRApplications_GetTransitionState>(get_class());
        }
    } // namespace IVRApplications_GetTransitionState
} // namespace app::classes::types
