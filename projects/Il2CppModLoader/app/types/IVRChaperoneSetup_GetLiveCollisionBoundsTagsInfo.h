#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class** type_info;
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveCollisionBoundsTagsInfo");
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo
} // namespace app::classes::types
