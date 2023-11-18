#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo {
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class** type_info() {
            static app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class**)(modloader::win::memory::resolve_rva(0x0470BDF0));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLiveCollisionBoundsTagsInfo");
        }
        inline app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo
} // namespace app::classes::types
