#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetTimeSinceLastVsync {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetTimeSinceLastVsync__Class** type_info;
        inline app::IVRSystem_GetTimeSinceLastVsync__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetTimeSinceLastVsync__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetTimeSinceLastVsync");
        }
        inline app::IVRSystem_GetTimeSinceLastVsync* create() {
            return il2cpp::create_object<app::IVRSystem_GetTimeSinceLastVsync>(get_class());
        }
    } // namespace IVRSystem_GetTimeSinceLastVsync
} // namespace app::classes::types
