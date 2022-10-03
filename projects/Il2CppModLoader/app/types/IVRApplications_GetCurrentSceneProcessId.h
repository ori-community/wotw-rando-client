#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetCurrentSceneProcessId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRApplications_GetCurrentSceneProcessId__Class** type_info;
        inline app::IVRApplications_GetCurrentSceneProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetCurrentSceneProcessId__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetCurrentSceneProcessId");
        }
        inline app::IVRApplications_GetCurrentSceneProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetCurrentSceneProcessId>(get_class());
        }
    } // namespace IVRApplications_GetCurrentSceneProcessId
} // namespace app::classes::types
