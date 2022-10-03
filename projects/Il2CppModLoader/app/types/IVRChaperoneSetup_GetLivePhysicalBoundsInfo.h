#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class** type_info;
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLivePhysicalBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo
} // namespace app::classes::types
