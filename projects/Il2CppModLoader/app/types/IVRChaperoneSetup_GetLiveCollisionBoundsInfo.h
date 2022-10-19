#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo {
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class** type_info = (app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04716788));
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo
} // namespace app::classes::types
