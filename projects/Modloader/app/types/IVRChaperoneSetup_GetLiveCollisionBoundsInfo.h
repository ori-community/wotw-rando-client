#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveCollisionBoundsInfo.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo {
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class** type_info() {
            static app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04716788));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveCollisionBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo
} // namespace app::classes::types
