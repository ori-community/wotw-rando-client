#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup_GetLivePhysicalBoundsInfo.h>
#include <Modloader/app/structs/IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo {
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class** type_info() {
            static app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C4A0));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_GetLivePhysicalBoundsInfo");
        }
        inline app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo>(get_class());
        }
    } // namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo
} // namespace app::classes::types
