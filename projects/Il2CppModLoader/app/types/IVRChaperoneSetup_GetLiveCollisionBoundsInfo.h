#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class** type_info;
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo
} // namespace app::classes::types
