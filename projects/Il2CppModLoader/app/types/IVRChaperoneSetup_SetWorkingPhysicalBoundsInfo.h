#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class** type_info;
        inline app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_SetWorkingPhysicalBoundsInfo");
        }
        inline app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo
} // namespace app::classes::types
